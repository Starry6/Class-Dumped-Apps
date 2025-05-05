@interface BlurDection : NSObject
@property (nonatomic) VFMetalContext context;
@property (nonatomic) MPSImageLaplacian laplacianFilter;
@property (nonatomic) MPSImageStatisticsMeanAndVariance calcMeanVarFilter;
@property (nonatomic) <MTLTexture> laplacianTexture;
@property (nonatomic) <MTLTexture> meanVarTexture;
- (id)laplacianFilter;
- (id)calcMeanVarFilter;
- (id)createTexWithWidth:andHeight:withPixelFormat:;
- (id)createTexWithWidth:andHeight:withPixelFormat:storageMode:;
- (void)initVideoFeatureWithWidth:height:;
- (id)laplacianTexture;
- (id)meanVarTexture;
- (float)process:outTexture:;
- (void)setCalcMeanVarFilter:;
- (void)setLaplacianFilter:;
- (void)setLaplacianTexture:;
- (void)setMeanVarTexture:;
- (id)context;
- (float)process:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)create:;
@end
