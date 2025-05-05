@interface MLBackgroundWatchdog : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> timer;
- (void)dealloc;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)invalidate;
+ (id)watchdogWithTimeout:queue:;
+ (id)watchdogWithTimeout:label:queue:;
@end
