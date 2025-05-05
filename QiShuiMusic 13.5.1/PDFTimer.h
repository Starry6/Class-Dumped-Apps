@interface PDFTimer : NSObject
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)update;
- (void)_execute;
- (id)initWithSelector:forTarget:;
- (id)initWithThrottleDelay:forSelector:forTarget:;
- (BOOL)isUpdateQueued;
@end
