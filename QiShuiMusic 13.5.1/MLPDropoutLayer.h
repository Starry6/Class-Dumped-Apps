@interface MLPDropoutLayer : MLPImageLayer
@property (nonatomic) float dropoutRatio;
- (id)initWithName:parameters:;
- (void)createKernel;
- (id)forward:input:labels:runInference:;
- (id)backward:inputGradient:;
- (id)generateNode:model:weightIter:;
- (id)seqForward:input:dataBatch:runInference:;
- (id)seqBackward:dataBatch:inputGradient:;
- (void)updatePreviousLayer:nextLayer:network:;
- (id)initWithName:previousLayer:dropoutRatio:;
- (id)initWithName:inputLength:inputChannels:dropoutRatio:;
- (id)forward:input:index:runInference:;
- (id)backward:index:inputGradient:;
- (float)dropoutRatio;
@end
