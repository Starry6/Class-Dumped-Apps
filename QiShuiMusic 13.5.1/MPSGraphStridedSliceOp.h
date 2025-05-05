@interface MPSGraphStridedSliceOp : MPSGraphOperation
- (void).cxx_destruct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
- (id)initWithGraph:inputTensors:controlDependencies:starts:ends:strides:startMask:endMask:shrinkAxisMask:name:;
@end
