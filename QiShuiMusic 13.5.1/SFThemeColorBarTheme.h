@interface SFThemeColorBarTheme : _SFBarTheme
@property (nonatomic) UIColor themeColor;
@property (nonatomic) UIColor overrideTintColor;
@property (nonatomic) q userInterfaceStyle;
@property (nonatomic) UITraitCollection traitCollection;
@property (nonatomic) BOOL appliesDarkeningOverlay;
@property (nonatomic) NSString backdropGroupName;
@property (nonatomic) UIBlurEffect overrideBackdropEffect;
- (id)overrideBackdropEffect;
- (void)setAppliesDarkeningOverlay:;
- (BOOL)appliesDarkeningOverlay;
- (id)themeColor;
- (void)applyBackdropEffectsToView:;
- (id)traitCollection;
- (id)backdropEffect;
- (void)setBackdropGroupName:;
- (long long)userInterfaceStyle;
- (void).cxx_destruct;
- (id)overrideTintColor;
- (id)backdropEffects;
- (id)initWithBarTintStyle:preferredBarTintColor:controlsTintColor:;
- (void)setOverrideBackdropEffect:;
- (BOOL)isEqual:;
- (id)backdropGroupName;
+ (BOOL)canTintPrivateStyles;
+ (BOOL)prefersThemeColorEffect;
@end
