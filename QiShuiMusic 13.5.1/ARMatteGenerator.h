@interface ARMatteGenerator : NSObject
@property (nonatomic) Q uncertaintyRadius;
@property (nonatomic) Q erosionRadius;
@property (nonatomic) Q dilationRadius;
- (void).cxx_destruct;
- (id)initWithDevice:matteResolution:useSmoothing:;
- (id)initWithDevice:matteResolution:;
- (void)_commonInitWithDevice:matteResolution:useSmoothing:;
- (void)setUncertaintyRadius:;
- (void)setErosionRadius:;
- (void)setDilationRadius:;
- (void)setupAlphaBufferForFrame:;
- (void)setupDepthBufferForFrame:;
- (void)setupBuffersForFrame:;
- (void)encodeCoefficients:frame:coefficientsForeground:coefficientsBackground:;
- (id)generateMatteFromFrame:commandBuffer:;
- (id)generateDilatedDepthFromFrame:commandBuffer:;
- (unsigned long long)uncertaintyRadius;
- (unsigned long long)erosionRadius;
- (unsigned long long)dilationRadius;
@end
