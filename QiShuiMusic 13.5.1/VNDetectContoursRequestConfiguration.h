@interface VNDetectContoursRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) float contrastAdjustment;
@property (nonatomic) NSNumber contrastPivot;
@property (nonatomic) BOOL detectsDarkOnLight;
@property (nonatomic) Q maximumImageDimension;
@property (nonatomic) BOOL inHierarchy;
@property (nonatomic) BOOL forceUseInputCVPixelBufferDirectly;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (float)contrastAdjustment;
- (void)setContrastAdjustment:;
- (id)contrastPivot;
- (void)setContrastPivot:;
- (BOOL)detectsDarkOnLight;
- (void)setDetectsDarkOnLight:;
- (unsigned long long)maximumImageDimension;
- (void)setMaximumImageDimension:;
- (BOOL)inHierarchy;
- (void)setInHierarchy:;
- (BOOL)forceUseInputCVPixelBufferDirectly;
- (void)setForceUseInputCVPixelBufferDirectly:;
@end
