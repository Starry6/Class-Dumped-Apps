@interface VCPLightMotionAnalyzer : VCPVideoAnalyzer
@property (nonatomic) float actionScore;
@property (nonatomic) float motionDivScore;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)actionScore;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (id)initWithQueue:turbo:;
- (int)prewarmWithWidth:height:;
- (int)generateThresholds:withConfidences:;
- (int)cameraMotionDetection:;
- (int)computeMotionDivScore:;
- (void)analyzeFrame:withTimestamp:andDuration:completion:;
- (float)motionDivScore;
+ (float)autoLiveMotionScore:;
@end
