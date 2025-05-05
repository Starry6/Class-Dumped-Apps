@interface KVXPCClient : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) S failureCode;
@property (nonatomic) NSString clientId;
@property (nonatomic) S interruptionCode;
- (void)terminate;
- (id)init;
- (id)clientId;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)initWithServiceProtocol:machServiceName:clientId:interruptionCode:invalidationCode:;
- (id)_failureHandlerWithResponse:;
- (id)_errorHandlerWithCompletion:;
- (void)serviceRequest:completion:usingBlock:;
- (void)serviceVersionRespondingRequest:completion:usingBlock:;
- (void)serviceArrayRespondingRequestWithCompletion:usingBlock:;
- (id)_remoteObjectProxy:errorCompletion:;
- (unsigned short)failureCode;
- (void)setFailureCode:;
- (unsigned short)interruptionCode;
@end
