@interface ARSCNCompositor : NSObject
@property (nonatomic) ARFrame currentFrame;
@property (nonatomic) q mode;
@property (nonatomic) q compositorAlgorithm;
@property (nonatomic) Q foregroundBitMask;
@property (nonatomic) q currentOrientation;
@property (nonatomic) {CGSize=dd} currentSize;
@property (nonatomic) BOOL showOcclusionGeometry;
@property (nonatomic) Q uncertaintyRadius;
@property (nonatomic) Q erosionRadius;
@property (nonatomic) double depthScale;
@property (nonatomic) Q dilationRadius;
@property (nonatomic) double filterEpsilon;
@property (nonatomic) double filterScale;
@property (nonatomic) double filterOffset;
@property (nonatomic) <MTLTexture> alphaTexture;
- (void)dealloc;
- (id)currentSize;
- (void)setCurrentSize:;
- (long long)currentOrientation;
- (void).cxx_destruct;
- (long long)mode;
- (id)currentFrame;
- (void)setUncertaintyRadius:;
- (void)setErosionRadius:;
- (void)setDilationRadius:;
- (unsigned long long)uncertaintyRadius;
- (unsigned long long)erosionRadius;
- (unsigned long long)dilationRadius;
- (id)initWithView:mode:algorithm:;
- (void)setForegroundBitMask:;
- (void)setFilterEpsilon:;
- (void)setFilterScale:;
- (void)setFilterOffset:;
- (void)encodeAlphaResampleToCommandBuffer:resolution:input:output:;
- (void)encodeDepthResampleToCommandBuffer:resolution:input:output:;
- (id)orientedVerticesWithResolution:;
- (void)executeOverlayMatteCallbackDual:;
- (void)executeOcclusionDepthStencilCallback:;
- (long long)compositorAlgorithm;
- (void)setCompositorAlgorithm:;
- (void)setCurrentFrame:;
- (unsigned long long)foregroundBitMask;
- (void)setCurrentOrientation:;
- (BOOL)showOcclusionGeometry;
- (void)setShowOcclusionGeometry:;
- (double)depthScale;
- (void)setDepthScale:;
- (double)filterEpsilon;
- (double)filterScale;
- (double)filterOffset;
- (id)alphaTexture;
+ (id)techniqueDictionaryWithName:;
+ (id)mattingWithDepthAndDualTechnique;
+ (id)mattingTechniqueDual;
@end
