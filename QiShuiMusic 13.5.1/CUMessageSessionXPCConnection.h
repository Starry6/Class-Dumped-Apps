@interface CUMessageSessionXPCConnection : NSObject
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remoteRegisterRequestID:options:;
- (void)remoteSendRequestID:options:request:responseHandler:;
@end
