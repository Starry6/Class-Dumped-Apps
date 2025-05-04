@interface AWELiveSkyLightCapsuleView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) @? clickBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)tapGestureAction;
- (BOOL)pointInside:withEvent:;
- (id)initWithFrame:;
- (id)contentView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)setupUI;
- (void)updateTitle:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
