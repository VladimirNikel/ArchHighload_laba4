import graphene

mass=[['77777777777','1234','False'],['71777777777','4567','False']]

class Query(graphene.ObjectType):
	hello = graphene.String(args={'name': graphene.String()})

	telefonNumber = graphene.String()
	pin = graphene.String(args={"telefonNumber": graphene.String()})
	status = graphene.String(args={"telefonNumber": graphene.String()})

	def resolve_hello(self, info, **args):
		return 'Hello ' + args["name"]

	def resolve_pin(self, info, **args):
		for i in mass:
			temp_mass=[]
			temp_mass.extend(i)	
			if args["telefonNumber"] in temp_mass:
				return temp_mass[1]
		return "pin not found"

	def resolve_status(self, info, **args):
		for i in mass:
			temp_mass=[]
			temp_mass.extend(i)
			if args["telefonNumber"] in temp_mass:
				return temp_mass[2]
		return "status not found"

print(mass)

schema = graphene.Schema(query=Query)
print("schema: ", schema)

telefon=input("Введите интересующий вас номер: ")




#result = schema.execute('{ hello (name: "'+telefon+'") }')
result = schema.execute('{ pin (telefonNumber: "'+telefon+'")} ')
print(result)

result = schema.execute('{ status (telefonNumber: "'+telefon+'")} ')
print(result) # "Hello World"



result = schema.execute('{ pin (telefonNumber: "'+telefon+'") status (telefonNumber: "'+telefon+'")} ')
print(result)