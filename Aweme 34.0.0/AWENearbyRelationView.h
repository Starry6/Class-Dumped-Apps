@interface AWENearbyRelationView : UIView
@property (nonatomic) UIImageView titleImageView;
@property (nonatomic) AWEGradientView titleGradientView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIStackView topStackView;
@property (nonatomic) UIStackView bottomStackView;
- (void)awe_themeReload;
- (void)__setupUI;
- (void)setTitleGradientView:;
- (id)titleGradientView;
- (void)__updateColor;
- (id)titleImageView;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)bottomStackView;
- (void)setBottomStackView:;
- (void)setTitleImageView:;
- (void)setTopStackView:;
- (id)topStackView;
@end
