require 'grpc'
require_relative 'verification_services_pb'

class VerificationService < Verification::Service
	def check_valid_telefon(request, _unused_call)
		if request.phone =~ /^7\d{10}/
			return StatusResponse.new(status: true)
		end
		StatusResponse.new(status: false)
	end
end

s = GRPC::RpcServer.new
s.add_http2_port('0.0.0.0:8002', :this_port_is_insecure)
s.handle(VerificationService)
s.run_till_terminated_or_interrupted([1, 'int', 'SIGQUIT'])