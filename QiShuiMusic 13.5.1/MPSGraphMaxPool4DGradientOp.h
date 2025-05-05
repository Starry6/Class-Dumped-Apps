@interface MPSGraphMaxPool4DGradientOp : MPSGraphPooling4DBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:descriptor:gradientWithIndices:name:;
@end
