@interface MLCPoolingLayer : MLCLayer
@property (nonatomic) MLCPoolingDescriptor descriptor;
- (id)descriptor;
- (id)initWithDescriptor:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
+ (id)poolingLayer:error:;
+ (id)layerWithDescriptor:;
+ (BOOL)supportsDataType:onDevice:;
@end
