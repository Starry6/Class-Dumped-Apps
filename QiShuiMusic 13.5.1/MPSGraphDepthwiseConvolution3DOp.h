@interface MPSGraphDepthwiseConvolution3DOp : MPSGraphDepthwiseConvolution3DBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
@end
