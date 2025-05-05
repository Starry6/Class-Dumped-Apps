@interface MLCReductionLayer : MLCLayer
@property (nonatomic) NSInteger reductionType;
@property (nonatomic) Q dimension;
@property (nonatomic) NSArray dimensions;
- (id)dimensions;
- (unsigned long long)dimension;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (int)reductionType;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
- (id)initWithReduceType:dimensions:;
+ (BOOL)supportsDataType:onDevice:;
+ (id)layerWithReductionType:dimension:;
+ (id)layerWithReductionType:dimensions:;
@end
