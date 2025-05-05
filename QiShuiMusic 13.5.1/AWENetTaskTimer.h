@interface AWENetTaskTimer : NSObject
@property (nonatomic) double interval;
@property (nonatomic) BOOL repeat;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) @? action;
- (id)initWithInterval:repeat:block:;
- (id)action;
- (void)setAction:;
- (void)setTimer:;
- (void)setInterval:;
- (void).cxx_destruct;
- (id)timer;
- (void)invalidate;
- (double)interval;
- (void)fire;
- (BOOL)repeat;
- (void)setRepeat:;
+ (id)scheduledTimerWithInterval:repeats:block:;
@end
