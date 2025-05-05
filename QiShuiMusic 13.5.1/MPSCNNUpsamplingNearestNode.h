@interface MPSCNNUpsamplingNearestNode : MPSNNFilterNode
@property (nonatomic) double scaleFactorX;
@property (nonatomic) double scaleFactorY;
- (double)scaleFactorX;
- (double)scaleFactorY;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:integerScaleFactorX:integerScaleFactorY:;
+ (id)nodeWithSource:integerScaleFactorX:integerScaleFactorY:;
@end
