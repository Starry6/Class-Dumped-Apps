@interface MLCGatherLayer : MLCLayer
@property (nonatomic) Q dimension;
- (unsigned long long)dimension;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (id)initWithDimension:;
+ (id)layerWithDimension:;
@end
