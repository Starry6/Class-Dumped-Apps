@interface MLCActivationLayer : MLCLayer
@property (nonatomic) MLCActivationDescriptor descriptor;
- (id)descriptor;
- (id)initWithDescriptor:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
+ (id)sigmoid;
+ (id)relu;
+ (id)leakyRelu;
+ (id)activationLayer:;
+ (id)clampedReluLayer:error:;
+ (id)layerWithDescriptor:;
+ (id)reluLayer;
+ (id)relu6Layer;
+ (id)leakyReLULayer;
+ (id)leakyReLULayerWithNegativeSlope:;
+ (id)linearLayerWithScale:bias:;
+ (id)sigmoidLayer;
+ (id)hardSigmoidLayer;
+ (id)tanhLayer;
+ (id)absoluteLayer;
+ (id)softPlusLayer;
+ (id)softPlusLayerWithBeta:;
+ (id)softSignLayer;
+ (id)eluLayer;
+ (id)eluLayerWithA:;
+ (id)relunLayerWithA:b:;
+ (id)logSigmoidLayer;
+ (id)seluLayer;
+ (id)celuLayer;
+ (id)celuLayerWithA:;
+ (id)hardShrinkLayer;
+ (id)hardShrinkLayerWithA:;
+ (id)softShrinkLayer;
+ (id)softShrinkLayerWithA:;
+ (id)tanhShrinkLayer;
+ (id)thresholdLayerWithThreshold:replacement:;
+ (id)geluLayer;
+ (id)hardSwishLayer;
+ (id)clampLayerWithMinValue:maxValue:;
@end
