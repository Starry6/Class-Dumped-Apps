@interface MLCComparisonLayer : MLCLayer
@property (nonatomic) NSInteger operation;
- (id)initWithOperation:;
- (int)operation;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
+ (id)layerWithOperation:;
+ (BOOL)supportsDataType:onDevice:;
@end
