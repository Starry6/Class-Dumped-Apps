@interface IESECLiveVideoProgressSlider : UISlider
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastBounds;
- (id)trackRectForBounds:;
- (id)thumbRectForBounds:trackRect:value:;
- (BOOL)pointInside:withEvent:;
- (id)hitTest:withEvent:;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)lastBounds;
- (void)setLastBounds:;
@end
