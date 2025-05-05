@interface MLCMultiGPUDeviceOps : MLCGPUDeviceOps
@property (nonatomic) NSInteger multiGPUReduction;
@property (nonatomic) NSArray localGradientMatrices;
@property (nonatomic) NSArray remoteGradientBuffers;
@property (nonatomic) NSArray receivedGradientMatrices;
@property (nonatomic) NSArray matrixSumKernels;
@property (nonatomic) NSMutableArray allReducedGradientMatrices;
@property (nonatomic) NSMutableArray rnnTrainableWeightGradients;
- (void).cxx_destruct;
- (id)rnnTrainableWeightGradients;
- (void)setRnnTrainableWeightGradients:;
- (id)initWithGPUDevicOps:;
- (int)multiGPUReduction;
- (void)setMultiGPUReduction:;
- (id)localGradientMatrices;
- (void)setLocalGradientMatrices:;
- (id)remoteGradientBuffers;
- (void)setRemoteGradientBuffers:;
- (id)receivedGradientMatrices;
- (void)setReceivedGradientMatrices:;
- (id)matrixSumKernels;
- (void)setMatrixSumKernels:;
- (id)allReducedGradientMatrices;
- (void)setAllReducedGradientMatrices:;
+ (id)multiGPUDeviceOpsWithGPUDeviceOps:;
@end
