@interface AWELuckCatCommerceAdTask : NSObject
@property (nonatomic) Q duration;
@property (nonatomic) NSTimer timer;
@property (nonatomic) double progress;
@property (nonatomic) double executionTime;
@property (nonatomic) q status;
- (void)markFinshAndStopTimer;
- (void)startTheTimer;
- (void)pauseTheTimer;
- (void)resumeTheTimer;
- (void)stopTheTimer;
- (void)addCountDuration:;
- (void)liveUpdateProgress:;
- (void)setTimer:;
- (void)updateProgress;
- (void)dealloc;
- (id)timer;
- (void)setStatus:;
- (void)setDuration:;
- (double)progress;
- (id)initWithDuration:;
- (void).cxx_destruct;
- (unsigned long long)duration;
- (long long)status;
- (double)executionTime;
- (void)setProgress:;
- (void)setExecutionTime:;
@end
