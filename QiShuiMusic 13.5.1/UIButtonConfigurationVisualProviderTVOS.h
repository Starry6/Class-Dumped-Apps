@interface UIButtonConfigurationVisualProviderTVOS : UIButtonConfigurationVisualProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_floatingContentView;
- (void)floatingContentView:isTransitioningFromState:toState:;
- (void)layoutSubviews;
- (void)setSelected:;
- (void)_updateBackgroundViewWithConfiguration:;
- (void)cleanupForVisualProvider:;
- (id)effectiveContentView;
- (void)setHighlighted:animated:;
- (void)_updateContentBackdropView;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:withAnimationCoordinator:;
- (void)_layoutFloatingContentView;
@end
