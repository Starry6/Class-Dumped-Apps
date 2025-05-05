@interface MLCMatMulLayer : MLCLayer
@property (nonatomic) MLCMatMulDescriptor descriptor;
- (id)descriptor;
- (id)initWithDescriptor:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
+ (id)matrixMultiplicationLayerUsingParameters:;
+ (id)layerWithDescriptor:;
@end
