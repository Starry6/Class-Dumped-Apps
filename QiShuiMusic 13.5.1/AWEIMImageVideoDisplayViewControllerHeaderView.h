@interface AWEIMImageVideoDisplayViewControllerHeaderView : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIButton moreButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AWEIMImageVideoDisplayViewControllerHeaderViewDelegate> delegate;
- (void)didTapMoreButton:;
- (void)p_setupLayout;
- (void)p_setupUI;
- (void)setMoreButtonHidden:;
- (void)setTitle:tailString:;
- (void)setTitleLabel:;
- (void)setDelegate:;
- (id)backButton;
- (void)setMoreButton:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)moreButton;
- (id)titleLabel;
- (void)setBackButton:;
- (void)didTapBackButton:;
- (void)setTitleHidden:;
@end
