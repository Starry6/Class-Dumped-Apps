@interface AWEIMActiveUserAccuracyTrackTimer : NSObject
@property (nonatomic) double interval;
@property (nonatomic) NSTimer timer;
@property (nonatomic) q rankIndex;
@property (nonatomic) @? block;
@property (nonatomic) double firstAutoTriggerDelay;
- (long long)rankIndex;
- (void)setRankIndex:;
- (void)setFirstAutoTriggerDelay:;
- (void)p_fireOnce;
- (double)firstAutoTriggerDelay;
- (double)interval;
- (void)setTimer:;
- (void)dealloc;
- (id)timer;
- (void)setInterval:;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)initWithInterval:block:;
+ (id)trackTimerWithInterval:block:;
@end
