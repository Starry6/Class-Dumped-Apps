@interface AWEListenFeedProgressSlider : UISlider
- (id)trackRectForBounds:;
- (id)thumbRectForBounds:trackRect:value:;
- (BOOL)gestureRecognizerShouldBegin:;
@end
