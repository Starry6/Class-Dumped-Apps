@interface MSService : NSObject
@property (nonatomic) BOOL canceled;
- (BOOL)isCanceled;
- (id)_connection;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)_simulateServicesMethod:arguments:callback:;
- (id)_handleMessageSendFailure:message:messageIndex:context:;
- (id)_createServiceOnQueue:;
- (void)responseConnection:handleError:;
- (void)responseConnection:handleResponse:;
- (void)setupResponseConnectionOnQueue:;
- (void)_registerConnection:onQueue:;
- (id)_createMessageForService:arguments:index:;
- (void)_callServicesMethod:arguments:callback:;
- (void)_callServicesMethod:arguments:replyHandler:;
@end
