@interface AWEMusicProgressSlider : UISlider
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastBounds;
- (BOOL)pointInside:withEvent:;
- (id)thumbRectForBounds:trackRect:value:;
- (id)hitTest:withEvent:;
- (id)lastBounds;
- (void)setLastBounds:;
@end
