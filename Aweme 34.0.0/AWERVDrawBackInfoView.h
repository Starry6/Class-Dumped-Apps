@interface AWERVDrawBackInfoView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UILabel subDescLabel;
@property (nonatomic) DUXButton actionButton;
@property (nonatomic) @? actionButtonClicked;
- (id)descLabel;
- (void)setDescLabel:;
- (id)actionButtonClicked;
- (id)subDescLabel;
- (void)setSubDescLabel:;
- (void)updateSubLDescLabelWithCount:;
- (void)setActionButtonClicked:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:;
@end
