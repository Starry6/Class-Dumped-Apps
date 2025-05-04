@interface AWEIMPageEnvironmentMonitorSession : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) double sessionStartTime;
@property (nonatomic) NSString trackerEventName;
@property (nonatomic) @? sampleRateInfoFetchBlock;
@property (nonatomic) @? environmentFetchBlock;
- (void)p_timerFired:;
- (id)trackerEventName;
- (void)setTrackerEventName:;
- (id)sampleRateInfoFetchBlock;
- (void)setSampleRateInfoFetchBlock:;
- (void)setEnvironmentFetchBlock:;
- (void)setSessionExtValue:forKey:;
- (void)p_trackWithFireType:;
- (id)p_addTimer;
- (void)p_removeTimer;
- (id)environmentFetchBlock;
- (id)sessionExtValueforKey:;
- (void)setSessionStartTime:;
- (void)setTimer:;
- (double)sessionStartTime;
- (id)init;
- (void)dealloc;
- (id)timer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
@end
