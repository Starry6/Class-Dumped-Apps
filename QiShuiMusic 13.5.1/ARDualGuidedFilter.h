@interface ARDualGuidedFilter : NSObject
@property (nonatomic) Q uncertaintyRadius;
@property (nonatomic) Q erosionRadius;
@property (nonatomic) double epsilon;
- (void)setEpsilon:;
- (double)epsilon;
- (void).cxx_destruct;
- (void)setUncertaintyRadius:;
- (void)setErosionRadius:;
- (unsigned long long)uncertaintyRadius;
- (unsigned long long)erosionRadius;
- (id)initWithDevice:useSmoothing:;
- (id)encodeBoxBlurToCommandBuffer:input:intermediate:output:;
- (void)setupBuffersWithWidth:andHeight:;
- (void)encodeDualCoefficients:guide:stencil:coefficientsTextureFG:coefficientsTextureBG:;
@end
