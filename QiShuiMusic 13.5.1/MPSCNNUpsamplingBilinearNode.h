@interface MPSCNNUpsamplingBilinearNode : MPSNNFilterNode
@property (nonatomic) double scaleFactorX;
@property (nonatomic) double scaleFactorY;
@property (nonatomic) BOOL alignCorners;
- (double)scaleFactorX;
- (double)scaleFactorY;
- (BOOL)alignCorners;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:integerScaleFactorX:integerScaleFactorY:;
- (id)initWithSource:integerScaleFactorX:integerScaleFactorY:alignCorners:;
+ (id)nodeWithSource:integerScaleFactorX:integerScaleFactorY:;
+ (id)nodeWithSource:integerScaleFactorX:integerScaleFactorY:alignCorners:;
@end
