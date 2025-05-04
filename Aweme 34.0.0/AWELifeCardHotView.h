@interface AWELifeCardHotView : UIView
@property (nonatomic) {CGPoint=dd} currentPoint;
@property (nonatomic) {CGPoint=dd} curPending2Point;
@property (nonatomic) {CGPoint=dd} tempPoint;
@property (nonatomic) @? hotTouchHandler;
- (void)setHotTouchHandler:;
- (void)setTempPoint:;
- (void)antiQuickHandel;
- (id)tempPoint;
- (id)hotTouchHandler;
- (void)setCurPending2Point:;
- (id)_float1:byDividingBy:;
- (id)notRounding:afterPoint:;
- (id)curPending2Point;
- (BOOL)pointInside:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setCurrentPoint:;
- (id)currentPoint;
- (void)layoutSubviews;
+ (id)convertNumberStringFromFloat:;
@end
