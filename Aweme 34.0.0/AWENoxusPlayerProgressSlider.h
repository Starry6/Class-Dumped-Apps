@interface AWENoxusPlayerProgressSlider : UISlider
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastBounds;
@property (nonatomic) <AWENoxusPlayerProgressSliderDelegate> delegate;
- (id)delegate;
- (BOOL)pointInside:withEvent:;
- (id)trackRectForBounds:;
- (id)thumbRectForBounds:trackRect:value:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (id)lastBounds;
- (void)setLastBounds:;
@end
