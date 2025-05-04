@interface AWEStableDetailPageBottomView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView backImageView;
@property (nonatomic) @? backToFeedBottomBarAction;
- (void)setBackImageView:;
- (id)backImageView;
- (double)containerTopMargin;
- (double)containerLeftAndRightMargin;
- (void)clickContainer;
- (void)setBackToFeedBottomBarAction:;
- (id)backToFeedBottomBarAction;
- (id)iconImage;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (double)containerHeight;
@end
