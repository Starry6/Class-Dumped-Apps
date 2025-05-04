@interface AWEPaymentPreviewSlider : UISlider
@property (nonatomic) double trackHeight;
- (double)trackHeight;
- (void)setTrackHeight:;
- (id)trackRectForBounds:;
- (id)thumbRectForBounds:trackRect:value:;
- (double)sliderWidth;
@end
