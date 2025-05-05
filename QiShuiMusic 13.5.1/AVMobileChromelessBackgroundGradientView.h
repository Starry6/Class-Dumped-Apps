@interface AVMobileChromelessBackgroundGradientView : UIView
@property (nonatomic) BOOL active;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (void)_updateGradientLayerState;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_setUpLayersIfNeeded;
- (void)setActive:;
- (BOOL)isActive;
@end
