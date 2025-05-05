@interface VNDetectContoursRequest : VNImageBasedRequest
@property (nonatomic) BOOL forceUseInputCVPixelBufferDirectly;
@property (nonatomic) BOOL inHierarchy;
@property (nonatomic) float contrastAdjustment;
@property (nonatomic) NSNumber contrastPivot;
@property (nonatomic) BOOL detectsDarkOnLight;
@property (nonatomic) BOOL detectDarkOnLight;
@property (nonatomic) Q maximumImageDimension;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
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
- (BOOL)detectDarkOnLight;
- (void)setDetectDarkOnLight:;
+ (Class)configurationClass;
@end
