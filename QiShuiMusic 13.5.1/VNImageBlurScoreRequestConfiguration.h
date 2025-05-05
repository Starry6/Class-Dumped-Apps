@interface VNImageBlurScoreRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) Q maximumIntermediateSideLength;
@property (nonatomic) Q blurDeterminationMethod;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (unsigned long long)maximumIntermediateSideLength;
- (void)setMaximumIntermediateSideLength:;
- (unsigned long long)blurDeterminationMethod;
- (void)setBlurDeterminationMethod:;
@end
