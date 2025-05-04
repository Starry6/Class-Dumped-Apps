@interface AWECrowdRecognitionSmartService : AWEBaseSmartServiceImpl
@property (nonatomic) NSTimer timer;
- (void)onTriggerEvent:params:;
- (void)runPredict;
- (void)setupObserverIfNeeded;
- (void)setTimer:;
- (id)timer;
- (void).cxx_destruct;
- (void)timerFired:;
+ (id)abTestConfig;
+ (id)sharedInstance;
@end
