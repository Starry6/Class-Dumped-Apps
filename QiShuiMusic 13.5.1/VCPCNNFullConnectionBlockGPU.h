@interface VCPCNNFullConnectionBlockGPU : VCPCNNFullConnectionBlock
- (int)forward;
- (void).cxx_destruct;
- (int)loadWeights:inputDim:outputDim:quantFactor:;
- (int)convVCPNeuronTypeToMPS:;
- (int)setupMPS;
- (int)shuffleWeights:fromSrc:inputChannels:inputHeight:inputWidth:outputChannels:;
@end
