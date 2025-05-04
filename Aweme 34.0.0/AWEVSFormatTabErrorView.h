@interface AWEVSFormatTabErrorView : UIView
@property (nonatomic) UIImageView errorIcon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel desLabel;
@property (nonatomic) UIButton retryButton;
@property (nonatomic) UIButton solutionButton;
@property (nonatomic) @? retryClickBlock;
- (void)setErrorIcon:;
- (id)errorIcon;
- (id)solutionButton;
- (void)showSolution;
- (void)setSolutionButton:;
- (id)desLabel;
- (void)setDesLabel:;
- (void)addMasonry;
- (void)themeControl;
- (id)retryClickBlock;
- (void)setRetryClickBlock:;
- (void)retryButtonClick;
- (void)onRetryButtonClick:;
- (void)updateTopEdg:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setRetryButton:;
- (id)retryButton;
- (void)createUI;
@end
