@interface AWEPadPopover : UIView
@property (nonatomic) AWEPadPopoverContainerView containerView;
@property (nonatomic) UIView content;
@property (nonatomic) UIView targetView;
@property (nonatomic) double bottomOffset;
@property (nonatomic) double marginToTarget;
- (double)marginToTarget;
- (void)dismissAimated:;
- (id)initWithContent:target:;
- (void)setMarginToTarget:;
- (id)content;
- (id)targetView;
- (id)containerView;
- (void)dismiss;
- (void)setTargetView:;
- (void)setContainerView:;
- (void)setContent:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)showInView:;
- (void)setupView;
- (double)bottomOffset;
- (void)setBottomOffset:;
@end
