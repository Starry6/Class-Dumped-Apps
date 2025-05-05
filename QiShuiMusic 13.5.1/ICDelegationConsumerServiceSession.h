@interface ICDelegationConsumerServiceSession : NSObject
@property (nonatomic) ICDelegationConsumerServiceRequest request;
@property (nonatomic) @? responseHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)responseHandler;
- (void)dealloc;
- (void)start;
- (void)stop;
- (id)request;
- (void)_stop;
- (void).cxx_destruct;
- (void)_handleTimeout;
- (id)initWithRequest:responseHandler:;
- (void)delegationConsumerNetService:didAcceptConnectionWithInputStream:outputStream:;
- (void)delegationServiceConnectionDidClose:;
- (BOOL)delegationServiceConnection:didReceiveRequest:;
- (void)delegationServiceConnection:didEncouterError:;
@end
