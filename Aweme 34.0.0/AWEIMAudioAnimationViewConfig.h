@interface AWEIMAudioAnimationViewConfig : NSObject
@property (nonatomic) double circleRadius;
@property (nonatomic) double curveWidth;
@property (nonatomic) double innerMargin;
@property (nonatomic) double animationDuration;
- (void)setInnerMargin:;
- (double)innerMargin;
- (double)curveWidth;
- (void)setCurveWidth:;
- (void)setAnimationDuration:;
- (double)animationDuration;
- (double)circleRadius;
- (void)setCircleRadius:;
@end
