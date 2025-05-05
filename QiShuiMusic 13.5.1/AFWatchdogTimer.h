@interface AFWatchdogTimer : NSObject
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:timeoutHandler:;
- (void).cxx_destruct;
- (id)initWithTimeoutInterval:onQueue:timeoutHandler:;
- (void)reset;
- (BOOL)isStopped;
- (id)copyWithZone:;
@end
