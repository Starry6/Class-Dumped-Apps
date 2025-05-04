@interface AWEIMFloatingContainerView : UIView
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UIView container;
@property (nonatomic) UIView separator;
- (void)addSeparatorWithPosition:;
- (void)addSingleSubview:;
- (void)showBottomBlurView:;
- (void)setContainer:;
- (id)container;
- (void)setSeparator:;
- (id)separator;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)currentView;
@end
