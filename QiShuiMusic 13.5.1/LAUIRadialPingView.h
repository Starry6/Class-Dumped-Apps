@interface LAUIRadialPingView : UIView
@property (nonatomic) BOOL animating;
- (void)setAnimating:;
- (void)dealloc;
- (BOOL)isAnimating;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id).cxx_construct;
- (void)_updateViewsWithColor;
- (void)_updateAnimatingAnimated:;
- (void)_setPulse:withDelay:;
- (void)_attachPulseAnimationWithDelay:;
- (void)_setExpand:forBlurAtIndex:withDelay:;
- (void)_updateExpandForBlurAtIndex:withDelay:;
- (void)_attachExpandAnimationToContainer:withDelay:;
- (void)_startExpandWithDelay:;
- (void)_endExpand;
@end
