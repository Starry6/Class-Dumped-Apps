@interface AWEIMCombineBadNetWorkView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel informativeTextLabel;
@property (nonatomic) IESIMButton primaryButton;
@property (nonatomic) UIButton solutionButton;
@property (nonatomic) @? reloadBlock;
@property (nonatomic) @? solutionBlock;
- (void)p_setupUI;
- (id)solutionButton;
- (void)setSolutionButton:;
- (id)informativeTextLabel;
- (void)p_configureLayout;
- (void)setInformativeTextLabel:;
- (void)onPrimaryButtonClicked;
- (id)solutionBlock;
- (void)setSolutionBlock:;
- (void)onSolutionButtonClicked;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (id)primaryButton;
- (void)setPrimaryButton:;
- (void)setReloadBlock:;
- (id)reloadBlock;
@end
