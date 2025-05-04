@interface AWERxObservable : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> timer;
- (id)throttle:;
- (void)send:withContext:;
- (id)subscribeWithContext:;
- (void)doOperation:afterDelay:;
- (id)map:;
- (void)setTimer:;
- (void)dealloc;
- (id)timer;
- (id)subscribe:;
- (void)send:;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)filter:;
- (void)bind:;
@end
