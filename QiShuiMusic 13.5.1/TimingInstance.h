@interface TimingInstance : NSObject
@property (nonatomic) double startTiming;
@property (nonatomic) double stopTiming;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL isRunning;
- (double)totalTime;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (void)setTotalTime:;
- (id)description;
- (double)startTiming;
- (void)setStartTiming:;
- (double)stopTiming;
- (void)setStopTiming:;
+ (id)createTimingInstanceWithStartTime:;
@end
