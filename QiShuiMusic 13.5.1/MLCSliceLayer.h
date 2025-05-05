@interface MLCSliceLayer : MLCLayer
@property (nonatomic) NSArray start;
@property (nonatomic) NSArray end;
@property (nonatomic) NSArray stride;
- (id)end;
- (id)start;
- (id)stride;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (BOOL)isStaticBatchSize;
- (id)initSliceLayerWithStart:end:stride:;
- (unsigned long long)resultSizeForDimension:;
+ (id)sliceLayerWithStart:end:stride:;
@end
