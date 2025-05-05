@interface IESLiveInteractiveMotionDetector : NSObject
@property (nonatomic) CMMotionManager cmManager;
@property (nonatomic) IESLiveInteractiveMotionDetectorConfig config;
@property (nonatomic) double lastShakeTime;
@property (nonatomic) @? accelerameterThresholdInjected;
@property (nonatomic) @? shakeEndTimeIntervalThresholdInjected;
- (double)accelerameterThreshold;
- (id)accelerameterThresholdInjected;
- (id)cmManager;
- (double)lastShakeTime;
- (void)setAccelerameterThresholdInjected:;
- (void)setCmManager:;
- (void)setLastShakeTime:;
- (void)setShakeEndTimeIntervalThresholdInjected:;
- (void)setupCMManager;
- (double)shakeEndTimeIntervalThreshold;
- (id)shakeEndTimeIntervalThresholdInjected;
- (void)startDetectMotionShakeWithCompletion:;
- (void)stopDetectMotion;
- (id)init;
- (void)dealloc;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)config;
+ (id)sharedQueue;
@end
