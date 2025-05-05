@interface MLNeuralNetworkMLComputeLayer : NSObject
+ (id)convolutionalLayerWithKernelHeight:kernelWidth:inputChannels:outputChannels:strideInX:strideInY:dilationRateInX:dilationRateInY:nGroups:weight:bias:paddingPolicy:;
+ (id)fullyConnectedLayerWithKernelWidth:kernelHeight:inputChannels:outputChannels:weight:bias:;
+ (id)uniDirectionalLSTMLayerWithInputSize:outputSize:inputWeightsData:recursionWeightsData:hasBias:biasTermsData:sequenceOutput:inputGateActivation:cellGateActivation:hiddenOutputActivation:;
+ (id)batchNormLayerWithFeatureChannels:varianceEpsilon:gamma:beta:mean:variance:;
+ (id)reshapeLayerWithChannelFirstOrderingAndTargetShape:;
+ (id)concatNDLayerWithAxis:;
+ (id)transposeLayerWithAxes:;
+ (id)poolingLayerWithKernelWidth:kernelHeight:strideInX:strideInY:paddingPolicy:poolingType:;
+ (id)sigmoid;
+ (id)softmax;
+ (id)relu;
+ (id)leakyRelu;
+ (id)reluNLayerWithAlpha:beta:;
+ (id)matMulLayerWithTransposesX:transposesY:;
+ (id)categoricalCrossEntropyLossWithNumberOfClasses:;
+ (id)meanSquaredErrorLoss;
+ (id)sgdOptimizerWithLearningRate:momentum:;
+ (id)adamOptimizerWithLearningRate:beta1:beta2:epsilon:timeStep:;
@end
