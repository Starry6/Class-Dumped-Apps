@interface SFThemeColorEffectView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIVisualEffect effect;
@property (nonatomic) NSString _groupName;
@property (nonatomic) SFThemeColorBarTheme theme;
@property (nonatomic) double themeColorVisibility;
- (void)setTheme:;
- (id)theme;
- (id)contentView;
- (void)_updateFillColor;
- (double)themeColorVisibility;
- (id)_groupName;
- (void)setEffect:;
- (void)_setGroupName:;
- (void)setThemeColorVisibility:;
- (void)_applyTheme;
- (void).cxx_destruct;
- (BOOL)_needsBlur;
- (id)initWithEffect:;
- (id)effect;
@end
