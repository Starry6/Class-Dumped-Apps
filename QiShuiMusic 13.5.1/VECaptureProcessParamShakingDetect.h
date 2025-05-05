@interface VECaptureProcessParamShakingDetect : VECaptureProcessParam
@property (nonatomic) float threshold;
@property (nonatomic) NSInteger stabilityCalNum;
@property (nonatomic) float stabilityHighThreshold;
@property (nonatomic) float stabilityLowThreshold;
@property (nonatomic) float buffersize;
@property (nonatomic) @? stabilityCallback;
@property (nonatomic) @? resetCallback;
- (int)stabilityCalNum;
- (float)buffersize;
- (id)resetCallback;
- (void)setBuffersize:;
- (void)setResetCallback:;
- (void)setStabilityCalNum:;
- (void)setStabilityCallback:;
- (void)setStabilityHighThreshold:;
- (void)setStabilityLowThreshold:;
- (id)stabilityCallback;
- (float)stabilityHighThreshold;
- (float)stabilityLowThreshold;
- (float)threshold;
- (id)init;
- (void).cxx_destruct;
- (void)setThreshold:;
@end
