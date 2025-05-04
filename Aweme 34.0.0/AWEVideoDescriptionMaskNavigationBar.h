@interface AWEVideoDescriptionMaskNavigationBar : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIButton circleButton;
@property (nonatomic) UIButton simpleButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) @? didClickBackBtnBlock;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (void)showTitle:;
- (id)simpleButton;
- (id)circleButton;
- (id)didClickBackBtnBlock;
- (void)circleButtonPressed:;
- (void)simpleButtonPressed:;
- (void)updateUIWithAlpha:;
- (void)setDidClickBackBtnBlock:;
- (void)setCircleButton:;
- (void)setSimpleButton:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
