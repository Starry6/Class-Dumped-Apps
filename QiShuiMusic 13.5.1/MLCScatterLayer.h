@interface MLCScatterLayer : MLCLayer
@property (nonatomic) Q dimension;
@property (nonatomic) NSInteger reductionType;
- (unsigned long long)dimension;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)initWithDimension:reductionType:;
- (id)resultTensorFromSources:;
- (int)reductionType;
+ (id)layerWithDimension:reductionType:;
@end
