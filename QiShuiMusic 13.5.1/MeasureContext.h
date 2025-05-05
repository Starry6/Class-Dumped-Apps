@interface MeasureContext : NSObject
@property (nonatomic) double rootWidth;
@property (nonatomic) q rootWidthMode;
@property (nonatomic) double rootHeight;
@property (nonatomic) q rootHeightMode;
@property (nonatomic) BOOL finalMeasure;
- (BOOL)finalMeasure;
- (id)initWithFinalMeasure:;
- (double)rootHeight;
- (long long)rootHeightMode;
- (long long)rootWidthMode;
- (double)rootWidth;
@end
