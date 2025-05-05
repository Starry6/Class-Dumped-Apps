@interface OBPrivacyModalNavigationController : OBNavigationController
@property (nonatomic) @? dismissButtonPressedHandler;
@property (nonatomic) BOOL darkMode;
- (BOOL)_canShowWhileLocked;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_doneButtonPressed;
- (void)addDismissButtonWithPressedHandler:;
- (void)setDarkMode:;
- (BOOL)isDarkMode;
- (id)dismissButtonPressedHandler;
- (void)setDismissButtonPressedHandler:;
@end
