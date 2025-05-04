@interface AWEFeedDetailTableViewLastCellMaskView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel backLabel;
@property (nonatomic) UIButton backButton;
@property (nonatomic) @? backAction;
- (void)backButtonClicked:;
- (void)configWithTitle:backHintText:backAction:;
- (id)initWithDismissAction:;
- (id)backLabel;
- (void)setBackLabel:;
- (id)backButton;
- (void)setBackButton:;
- (void)setBackAction:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)backAction;
- (void)setupUI;
@end
