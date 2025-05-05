@interface MLCDropoutLayer : MLCLayer
@property (nonatomic) float rate;
@property (nonatomic) Q seed;
- (unsigned long long)seed;
- (float)rate;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (id)initWithRate:seed:;
+ (id)layerWithRate:seed:;
@end
