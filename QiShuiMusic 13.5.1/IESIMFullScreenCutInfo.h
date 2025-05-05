@interface IESIMFullScreenCutInfo : IESIMBaseApiModel
@property (nonatomic) double xMin;
@property (nonatomic) double xMax;
@property (nonatomic) double yMin;
@property (nonatomic) double yMax;
- (void)setXMax:;
- (void)setXMin:;
- (void)setYMax:;
- (void)setYMin:;
- (double)xMax;
- (double)xMin;
- (double)yMax;
- (double)yMin;
+ (id)JSONKeyPathsByPropertyKey;
@end
