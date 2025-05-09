@interface AWEBigFontPreview : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIView contentView;
@property (nonatomic) q currentIndex;
@property (nonatomic) UIImage backgroundImage;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView tabBarView;
@property (nonatomic) UIView bottomBarView;
@property (nonatomic) UIView descriptionZoneView;
@property (nonatomic) UIView anchorPointView;
@property (nonatomic) UIView elementView;
@property (nonatomic) UIView shadowView;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setBottomBarView:;
- (void)configNormalStyle;
- (void)setupDeprecateUI;
- (id)tabBarView;
- (id)descriptionZoneView;
- (long long)rootViewVerticalBreakPoint;
- (long long)rootViewHorizontalBreakPoint;
- (void)setTabBarView:;
- (void)setDescriptionZoneView:;
- (void)setAnchorPointView:;
- (void)updatePreviewWithIndex:;
- (void)configLargeStyle;
- (void)configUltraLargeStyle;
- (void)setupShadow;
- (id)tabbarItemView:isSelect:;
- (double)scaleForPreview:;
- (id)anchorPointView;
- (id)elementItemViewWithImage:description:;
- (void)updateConfigWithIndex:;
- (id)backgroundImage;
- (void)setBackgroundImage:;
- (void)setCurrentIndex:;
- (id)shadowView;
- (id)initWithFrame:;
- (id)contentView;
- (void)setShadowView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (long long)currentIndex;
- (void)setupUI;
- (void)setElementView:;
- (id)elementView;
- (id)bottomBarView;
@end
