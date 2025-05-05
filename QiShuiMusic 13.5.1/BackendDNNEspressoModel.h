@interface BackendDNNEspressoModel : ADEspressoRunner
@property (nonatomic) ADEspressoBufferHandle depthInputBufferHandle;
@property (nonatomic) ADEspressoBufferHandle imageInputBufferHandle;
@property (nonatomic) ADEspressoBufferHandle resultsOutputBufferHandle;
@property (nonatomic) NSMutableArray outputFeatureVectorDim;
- (void).cxx_destruct;
- (BOOL)initializeInputOutputBlobs;
- (int)processImage:depthImage:result:;
- (id)outputFeatureVectorDim;
- (void)setOutputFeatureVectorDim:;
- (id)depthInputBufferHandle;
- (void)setDepthInputBufferHandle:;
- (id)imageInputBufferHandle;
- (void)setImageInputBufferHandle:;
- (id)resultsOutputBufferHandle;
- (void)setResultsOutputBufferHandle:;
@end
