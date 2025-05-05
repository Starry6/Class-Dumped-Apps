@interface SFReaderAppearanceThemeSelector : UIView
@property (nonatomic) q selectedTheme;
@property (nonatomic) @? selectedThemeChangedBlock;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)_themeButtonAction:;
- (void)setSelectedTheme:;
- (void)_updateSelectedTheme;
- (void)_changeSelectionForTheme:selected:;
- (id)_buttonForTheme:;
- (long long)_themeForButton:;
- (void)_createThemeButtons;
- (id)_imageForTheme:selected:;
- (id)_themeButtonImageWithFillColor:strokeColor:selected:;
- (long long)selectedTheme;
- (id)selectedThemeChangedBlock;
- (void)setSelectedThemeChangedBlock:;
+ (id)themeSelectorWithBlock:;
+ (double)requiredHeight;
@end
