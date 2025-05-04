@interface AWENearbySkyLightCapsuleView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) @? clickBlock;
- (void)layoutSubviews;
- (id)aAWEPadModuleAdapter;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)tapGestureAction;
- (void)setBackgroundView:;
- (id)initWithFrame:;
- (id)contentView;
- (id)backgroundView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)setupUI;
- (void)updateTitle:;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (Class)aAWEPadModuleAdapterClass;
@end
