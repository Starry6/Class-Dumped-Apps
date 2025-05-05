@interface IDSDaemonRequestContext : NSObject
- (id)responseHandler;
- (void)dealloc;
- (id)systemTimer;
- (id)timeoutBlock;
- (void).cxx_destruct;
- (id)initWithResponseHandler:timeoutBlock:systemTimer:;
- (void)killSystemTimer;
@end
