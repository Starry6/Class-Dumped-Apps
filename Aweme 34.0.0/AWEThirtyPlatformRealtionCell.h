@interface AWEThirtyPlatformRealtionCell : UIView
@property (nonatomic) AWEThirtyPlatformRealtionCellConfig config;
@property (nonatomic) UIView circleView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowImageView;
- (void)setupGesture;
- (void)onTapped:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (void)setupAccessibility;
- (id)circleView;
- (void)setCircleView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
