@interface MPSGraphLocalConvolutionBase : MPSGraphOperation
- (void).cxx_destruct;
- (id)initWithGraph:inputTensors:controlDependencies:dataLayout:kernelShape:dilationRateInX:dilationRateInY:name:;
@end
