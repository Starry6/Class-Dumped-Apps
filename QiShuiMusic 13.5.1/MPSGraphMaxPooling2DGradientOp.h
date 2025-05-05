@interface MPSGraphMaxPooling2DGradientOp : MPSGraphPooling2DBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:descriptor:gradientWithIndices:name:;
@end
