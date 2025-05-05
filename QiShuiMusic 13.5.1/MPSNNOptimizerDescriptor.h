@interface MPSNNOptimizerDescriptor : NSObject
@property (nonatomic) float learningRate;
@property (nonatomic) float gradientRescale;
@property (nonatomic) BOOL applyGradientClipping;
@property (nonatomic) float gradientClipMax;
@property (nonatomic) float gradientClipMin;
@property (nonatomic) float regularizationScale;
@property (nonatomic) Q regularizationType;
- (float)learningRate;
- (void)setLearningRate:;
- (id)initWithLearningRate:gradientRescale:regularizationType:regularizationScale:;
- (void)setApplyGradientClipping:;
- (void)setGradientClipMax:;
- (void)setGradientClipMin:;
- (float)gradientClipMin;
- (float)gradientClipMax;
- (id)initWithLearningRate:gradientRescale:applyGradientClipping:gradientClipMax:gradientClipMin:regularizationType:regularizationScale:;
- (float)gradientRescale;
- (float)regularizationScale;
- (unsigned long long)regularizationType;
- (void)setGradientRescale:;
- (BOOL)applyGradientClipping;
- (void)setRegularizationType:;
- (void)setRegularizationScale:;
+ (id)optimizerDescriptorWithLearningRate:gradientRescale:regularizationType:regularizationScale:;
+ (id)optimizerDescriptorWithLearningRate:gradientRescale:applyGradientClipping:gradientClipMax:gradientClipMin:regularizationType:regularizationScale:;
@end
