@interface MLPPoolingLayer : MLPConvolutionBase
- (id)initWithName:previousLayer:kernelWidth:kernelHeight:kernelStride:;
- (id)initWithName:inputLength:inputChannels:kernelWidth:kernelHeight:kernelStride:;
- (id)initWithName:parameters:;
- (void)createKernel;
- (id)forward:input:labels:runInference:;
- (id)backward:inputGradient:;
- (id)generateNode:model:weightIter:;
@end
