@interface MLCYOLOLossLayer : MLCLossLayer
@property (nonatomic) MLCYOLOLossDescriptor yoloLossDescriptor;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
- (id)initWithLossDescriptor:;
- (id)yoloLossDescriptor;
+ (id)layerWithDescriptor:;
@end
