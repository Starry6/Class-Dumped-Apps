@interface AWEOfflineViewModeEntranceView : UICollectionReusableView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView rightArrow;
@property (nonatomic) DUXDivider devider;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UILabel cleanLabel;
@property (nonatomic) BOOL shouldHideRecommendView;
@property (nonatomic) @? clickAction;
@property (nonatomic) BOOL shouldHideCleanButton;
- (id)clickAction;
- (void)setClickAction:;
- (void)setRightArrow:;
- (id)cleanLabel;
- (void)setCleanLabel:;
- (BOOL)shouldHideRecommendView;
- (void)setShouldHideRecommendView:;
- (void)setShouldHideCleanButton:;
- (id)devider;
- (void)cleanLabelTapped;
- (BOOL)shouldHideCleanButton;
- (void)setDevider:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTextLabel:;
- (void)setupView;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)click;
- (id)rightArrow;
@end
