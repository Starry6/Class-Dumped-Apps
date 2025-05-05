@interface PKPaletteKeyboardButton : PKPaletteButton
@property (nonatomic) q floatingKeyboardType;
@property (nonatomic) BOOL enableKeyboardToggle;
@property (nonatomic) UIMenu keyboardSelectionMenu;
- (id)initWithImage:;
- (void)dealloc;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (void).cxx_destruct;
- (void)_updateButtonImage;
- (void)setFloatingKeyboardType:;
- (void)setEnableKeyboardToggle:;
- (void)setKeyboardSelectionMenu:;
- (void)_updateKeyboardToggleState;
- (long long)floatingKeyboardType;
- (BOOL)enableKeyboardToggle;
- (id)keyboardSelectionMenu;
@end
