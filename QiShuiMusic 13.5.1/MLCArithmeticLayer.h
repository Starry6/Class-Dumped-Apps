@interface MLCArithmeticLayer : MLCLayer
@property (nonatomic) BOOL binaryOperation;
@property (nonatomic) NSInteger operation;
- (int)operation;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (unsigned long long)deviceMemorySizeWithOptimizer:device:;
- (BOOL)binaryOperation;
- (BOOL)skipGradientComputationForSourceTensor:resultTensor:;
- (id)initWithArithmeticOperation:;
+ (id)layerWithOperation:;
@end
