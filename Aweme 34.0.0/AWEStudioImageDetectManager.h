@interface AWEStudioImageDetectManager : NSObject
@property (nonatomic) Q currentStep;
@property (nonatomic) VEAlgorithmSession algorithmSession;
@property (nonatomic) AWEStudioImageDetectTracker tracker;
- (id)algorithmSession;
- (void)setAlgorithmSession:;
- (void)detect:completion:;
- (void)p_main_thread_start:completion:;
- (void)updateCurrentStep:;
- (void)p_main_thread_detect:imagePaths:applicationName:callback:;
- (unsigned long long)currentStep;
- (id)init;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
- (BOOL)isRunning;
+ (id)shared;
@end
