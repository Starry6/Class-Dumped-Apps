@interface AWERegisterPageInfoCollectTopView : UIView
@property (nonatomic) UILabel pageLabel;
@property (nonatomic) UIButton jumpButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UILabel navTitleLabel;
@property (nonatomic) @? jumpBlock;
- (id)jumpBlock;
- (void)setJumpBlock:;
- (void)setJumpButton:;
- (id)jumpButton;
- (void)setNavTitleLabel:;
- (void)configTopViewUIToFitSmallScreenWithTitle:;
- (void)configWith:title:subtitle:jumpButtonClickBlock:;
- (void)resetToSmallScreenNormalUI;
- (void)jumpButtonClick;
- (id)init;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setupUI;
- (id)pageLabel;
- (void)setPageLabel:;
- (id)navTitleLabel;
@end
