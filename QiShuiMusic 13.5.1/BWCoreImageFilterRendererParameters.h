@interface BWCoreImageFilterRendererParameters : NSObject
@property (nonatomic) NSArray filters;
@property (nonatomic) CIFilter originalOutputFilter;
@property (nonatomic) BOOL requiresDepthMap;
@property (nonatomic) BOOL requiresFaceLandmarks;
@property (nonatomic) s type;
@property (nonatomic) float interpolationFractionComplete;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filters;
- (id)originalOutputFilter;
- (void)dealloc;
- (void)setOriginalOutputFilter:;
- (id)initWithFilters:originalOutputFilter:;
- (void)setFilters:;
- (int)prepareForRenderingWithInputVideoFormat:;
- (short)type;
- (BOOL)requiresFaceLandmarks;
- (int)depthTypeForFilter:;
- (void)updateByInterpolatingFromParameters:toParameters:withFractionComplete:;
- (BOOL)requiresDepthMap;
- (float)interpolationFractionComplete;
- (id)copyWithZone:;
+ (BOOL)containsFilterRequiringFaceLandmarks:;
@end
