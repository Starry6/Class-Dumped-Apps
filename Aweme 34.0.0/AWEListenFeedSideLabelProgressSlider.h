@interface AWEListenFeedSideLabelProgressSlider : UISlider
@property (nonatomic) UIView<AWEListenFeedProgressViewProtocol> containerView;
@property (nonatomic) double trackHeight;
- (double)trackHeight;
- (void)setTrackHeight:;
- (BOOL)pointInside:withEvent:;
- (id)trackRectForBounds:;
- (void)accessibilityDecrement;
- (id)containerView;
- (void)accessibilityIncrement;
- (void)setContainerView:;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
@end
