@interface VCPCNNFullConnectionBlockScalar : VCPCNNFullConnectionBlock
- (int)forward;
- (int)loadWeights:inputDim:outputDim:quantFactor:;
@end
