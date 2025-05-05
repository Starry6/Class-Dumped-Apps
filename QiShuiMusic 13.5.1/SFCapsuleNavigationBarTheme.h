@interface SFCapsuleNavigationBarTheme : _SFBarTheme
@property (nonatomic) _SFBarTheme backgroundTheme;
@property (nonatomic) BOOL hidesOverlayEffects;
@property (nonatomic) _SFBarTheme contentTheme;
@property (nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme titleTheme;
@property (nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme tabTitleTheme;
@property (nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme activeTabTitleTheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)titleTheme;
- (id)backgroundOverlayEffects;
- (BOOL)hidesOverlayEffects;
- (void)applyBackdropEffectsToView:;
- (id)contentTheme;
- (id)_titleThemeIsMinimized:;
- (void)setHidesOverlayEffects:;
- (void).cxx_destruct;
- (id)tabTitleTheme;
- (void)setBackgroundTheme:;
- (id)backgroundTheme;
- (BOOL)isEqual:;
+ (BOOL)backdropIsDarkForStyle:;
+ (id)backdropEffectForStyle:;
@end
