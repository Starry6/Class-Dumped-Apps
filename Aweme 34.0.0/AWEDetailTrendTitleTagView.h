@interface AWEDetailTrendTitleTagView : UIView
@property (nonatomic) UIImageView leftIcon;
@property (nonatomic) UIImageView rightIcon;
@property (nonatomic) UILabel midLabel;
@property (nonatomic) UIStackView containerView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) CAGradientLayer backgroundLayer;
@property (nonatomic) UIView leftSpaceView;
- (void)setLeftIcon:;
- (void)setRightIcon:;
- (id)midLabel;
- (id)leftSpaceView;
- (void)setMidLabel:;
- (void)setLeftSpaceView:;
- (id)init;
- (void)setBackgroundView:;
- (id)containerView;
- (id)backgroundView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)backgroundLayer;
- (void)setBackgroundLayer:;
- (void)setupUI;
- (id)leftIcon;
- (id)rightIcon;
@end
