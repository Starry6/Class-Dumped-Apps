@interface MPSNNLossGradient : MPSCNNBinaryKernel
@property (nonatomic) I lossType;
@property (nonatomic) NSInteger reductionType;
@property (nonatomic) BOOL reduceAcrossBatch;
@property (nonatomic) Q numberOfClasses;
@property (nonatomic) float weight;
@property (nonatomic) float labelSmoothing;
@property (nonatomic) float epsilon;
@property (nonatomic) float delta;
@property (nonatomic) BOOL computeLabelGradients;
- (unsigned long long)maxBatchSize;
- (float)delta;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (float)weight;
- (void)setWeight:;
- (void)setEpsilon:;
- (id)debugDescription;
- (float)epsilon;
- (void)encodeWithCoder:;
- (void)setDelta:;
- (id)initWithDevice:;
- (unsigned long long)numberOfClasses;
- (id)initWithDevice:lossDescriptor:;
- (unsigned int)lossType;
- (id)encodeBatchToCommandBuffer:sourceGradients:sourceImages:labels:weights:sourceStates:;
- (void)setLabelSmoothing:;
- (int)reductionType;
- (float)labelSmoothing;
- (id)destinationImageDescriptorForSourceImages:sourceStates:;
- (BOOL)reduceAcrossBatch;
- (void)encodeBatchToCommandBuffer:sourceGradients:sourceImages:labels:weights:sourceStates:destinationGradients:;
- (BOOL)computeLabelGradients;
- (void)setComputeLabelGradients:;
+ (id)libraryInfo:;
@end
