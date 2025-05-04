@interface AWENetTaskTimer : NSObject
@property (nonatomic) double interval;
@property (nonatomic) BOOL repeat;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) @? action;
- (id)initWithInterval:repeat:block:;
- (double)interval;
- (void)setTimer:;
- (id)timer;
- (void)setInterval:;
- (void)invalidate;
- (void)setAction:;
- (void)fire;
- (id)action;
- (void).cxx_destruct;
- (BOOL)repeat;
- (void)setRepeat:;
+ (id)scheduledTimerWithInterval:repeats:block:;
@end
