@interface AWEMateOnboardingSectionHeaderView : UIView
@property (nonatomic) UIStackView titleStackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) @? actionBlock;
- (void)initView;
- (void)refreshWithTitle:subTitle:actionButtonTitle:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)actionButton;
- (void)setActionButton:;
- (void)setTitleStackView:;
- (id)titleStackView;
- (void)actionButtonTapped;
@end
