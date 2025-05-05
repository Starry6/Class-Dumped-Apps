@interface IESECVideoPreviewProgressSlider : UISlider
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastBounds;
- (id)thumbRectForBounds:trackRect:value:;
- (BOOL)pointInside:withEvent:;
- (id)hitTest:withEvent:;
- (id)lastBounds;
- (void)setLastBounds:;
@end
