@interface MLCSelectionLayer : MLCLayer
- (id)init;
- (id)description;
- (id)copyWithZone:;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
+ (id)layer;
+ (BOOL)supportsDataType:onDevice:;
@end
