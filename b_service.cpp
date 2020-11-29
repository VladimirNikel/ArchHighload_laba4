#include <iostream>
#include <string>
#include "grpcpp/grpcpp.h"
#include "verification.pb.h"
#include <cctype>

using namespace std;

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using verification::PhonePinRequest;
using verification::StatusResponse;
using verification::Verification;

class VerificationClient{
public:
	VerificationClient(shared_ptr<Channel> channel):stub_(Verification::NewStub(channel)){}

	bool CheckValidTelefon(string phone){
		if (isDigit(phone))
			return TRUE;
		else
			return FALSE;
	}
private:
	unique_ptr<Verification::Stub> stub_;
};


int main(){
	string target_str = "localhost:8002";
	VerificationClient verification(grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials()));
	string reply = verification.CheckValidTelefon()

	return 0;
}