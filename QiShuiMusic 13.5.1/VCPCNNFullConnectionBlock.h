@interface VCPCNNFullConnectionBlock : VCPCNNBlock
- (void)dealloc;
- (BOOL)useGPU;
- (BOOL)supportGPU;
- (int)loadWeights:inputDim:outputDim:quantFactor:;
- (int)readFromDisk:quantFactor:;
- (int)constructBlock:context:;
- (id)initWithParameters:NeuronType:;
- (int)readWeightsBias:weights:bias:inputDim:outputDim:quantFactor:;
+ (id)fcBlockWithNumNeurons:NeuronType:;
@end
