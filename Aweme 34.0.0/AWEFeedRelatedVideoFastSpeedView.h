@interface AWEFeedRelatedVideoFastSpeedView : UIView
@property (nonatomic) UIView backView;
@property (nonatomic) UIImageView leftArrow;
@property (nonatomic) UIImageView rightArrow;
@property (nonatomic) UILabel speedLabel;
@property (nonatomic) UILabel titleLabel;
- (void)setRightArrow:;
- (void)setLeftArrow:;
- (id)speedLabel;
- (void)setSpeedLabel:;
- (void)showFastFowardCycleAnimation;
- (void)setTitleLabel:;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
- (id)titleLabel;
- (void)setupUI;
- (id)leftArrow;
- (id)rightArrow;
+ (id)fastSpeedView;
@end
