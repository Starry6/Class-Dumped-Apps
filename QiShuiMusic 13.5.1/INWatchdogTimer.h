@interface INWatchdogTimer : NSObject
- (BOOL)isCanceled;
- (void)_reset;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)_cancel;
- (void)_stop;
- (BOOL)cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:timeoutHandler:;
- (void).cxx_destruct;
- (id)initWithTimeoutInterval:onQueue:timeoutHandler:;
- (BOOL)_isCanceled;
- (void)_start;
- (BOOL)_cancelIfNotAlreadyCanceled;
@end
