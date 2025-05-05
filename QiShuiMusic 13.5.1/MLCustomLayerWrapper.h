@interface MLCustomLayerWrapper : NSObject
@property (nonatomic) BOOL ndMode;
@property (nonatomic) NSString className;
@property (nonatomic) NSObject<MLCustomLayer> customImpl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)className;
- (id)initWithParameters:;
- (void).cxx_destruct;
- (void)setMappedWeights:sizeInBytes:;
- (id)setupForInputShapes:withParameters:;
- (void)computeOnCPUWithInputTensors:outputTensors:;
- (BOOL)hasGPUSupport;
- (void)encodeToMetalCommandBuffer:inputTensors:outputTensors:;
- (BOOL)ndMode;
- (id)customImpl;
- (void)setCustomImpl:;
+ (id)factory;
+ (id)espressoShapeToCoremlShape:ndMode:;
+ (id)espressoShapesToCoremlShapes:ndMode:;
+ (id)coremlShapeToEspressoShape:ndMode:;
+ (id)coremlShapesToEspressoShapes:ndMode:;
+ (id)getStrides:;
+ (id)espressoTensorToCoremlTensor:ndMode:;
+ (id)espressoTensorsToCoremlTensorsGPU:;
+ (id)espressoTensorsToCoremlTensors:ndMode:;
@end
