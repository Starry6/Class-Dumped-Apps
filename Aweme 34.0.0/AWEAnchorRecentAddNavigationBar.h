@interface AWEAnchorRecentAddNavigationBar : UIView
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) @? leftTappedBlock;
@property (nonatomic) @? rightTappedBlock;
@property (nonatomic) UILabel titleLabel;
- (void)leftBtnTapped:;
- (void)rightBtnTapped:;
- (id)leftTappedBlock;
- (id)rightTappedBlock;
- (void)updateEditMode:;
- (void)setLeftTappedBlock:;
- (void)setRightTappedBlock:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (id)leftButton;
- (id)initWithFrame:;
- (id)rightButton;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
