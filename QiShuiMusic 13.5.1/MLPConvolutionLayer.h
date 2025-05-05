@interface MLPConvolutionLayer : MLPConvolutionBase
@property (nonatomic) MLPModelConvolutionDataSource dataSource;
@property (nonatomic) r^v initialWeights;
@property (nonatomic) r^v initialBias;
- (void)setDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (id)initWithName:parameters:;
- (void)createKernel;
- (id)forward:input:labels:runInference:;
- (id)backward:inputGradient:;
- (id)generateNode:model:weightIter:;
- (id)initialWeights;
- (void)setInitialWeights:;
- (id)initWithName:previousLayer:kernelWidth:kernelHeight:kernelStride:outputChannels:neuronType:neuronParams:;
- (id)initWithName:inputLength:inputChannels:kernelWidth:kernelHeight:kernelStride:outputChannels:neuronType:neuronParams:;
- (void)updatePrimaryCurrentState:index:inference:;
- (id)initialBias;
- (void)setInitialBias:;
@end
