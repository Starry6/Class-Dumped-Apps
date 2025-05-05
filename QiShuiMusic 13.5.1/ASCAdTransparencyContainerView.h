@interface ASCAdTransparencyContainerView : UIView
@property (nonatomic) ASCAdTransparencyButtonView adTransparencyButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIVisualEffectView backgroundView;
@property (nonatomic) BOOL backgroundHidden;
@property (nonatomic) NSString developerName;
- (id)backgroundView;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)encodeWithCoder:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)titleLabel;
- (void)setBackgroundHidden:;
- (BOOL)isBackgroundHidden;
- (void)updateFont;
- (id)developerName;
- (void)setDeveloperName:;
- (void)addAdTransparencyTarget:action:;
- (id)adTransparencyButton;
+ (double)edgePadding;
+ (id)developerNameFontCompatibleWithTraitCollection:;
+ (double)buttonTextPadding;
@end
