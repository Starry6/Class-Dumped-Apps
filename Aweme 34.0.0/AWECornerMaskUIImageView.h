@interface AWECornerMaskUIImageView : UIImageView
@property (nonatomic) {CGPoint=dd} lastPoint;
- (id)init;
- (id)hitTest:withEvent:;
- (id)lastPoint;
- (void)setLastPoint:;
@end
