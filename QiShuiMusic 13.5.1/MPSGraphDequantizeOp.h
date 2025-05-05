@interface MPSGraphDequantizeOp : MPSGraphOperation
- (void).cxx_destruct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:dtype:axis:name:;
@end
