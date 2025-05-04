@interface AWEFullScreenCutInfo : AWEBaseApiModel
@property (nonatomic) double xMin;
@property (nonatomic) double xMax;
@property (nonatomic) double yMin;
@property (nonatomic) double yMax;
- (void)setXMin:;
- (void)setXMax:;
- (void)setYMin:;
- (void)setYMax:;
- (double)xMin;
- (double)xMax;
- (double)yMin;
- (double)yMax;
+ (id)JSONKeyPathsByPropertyKey;
@end
