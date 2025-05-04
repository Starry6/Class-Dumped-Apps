@interface AWEMultiElementHorizontalView : UIView
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) UIStackView containerView;
- (void)setScrollView:;
- (id)initWithFrame:;
- (id)containerView;
- (id)scrollView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupView;
@end
