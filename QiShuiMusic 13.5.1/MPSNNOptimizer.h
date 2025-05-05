@interface MPSNNOptimizer : MPSKernel
@property (nonatomic) float learningRate;
@property (nonatomic) float gradientRescale;
@property (nonatomic) BOOL applyGradientClipping;
@property (nonatomic) float gradientClipMax;
@property (nonatomic) float gradientClipMin;
@property (nonatomic) float regularizationScale;
@property (nonatomic) Q regularizationType;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (float)learningRate;
- (void)setLearningRate:;
- (void)setApplyGradientClipping:;
- (float)gradientClipMin;
- (float)gradientClipMax;
- (float)gradientRescale;
- (float)regularizationScale;
- (unsigned long long)regularizationType;
- (BOOL)applyGradientClipping;
- (id)initWithDevice:optimizerDescriptor:;
@end
