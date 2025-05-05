@interface UIKeyboardVisualModeManager : NSObject
@property (nonatomic) NSInteger lastVisualMode;
@property (nonatomic) <UIKeyboardVisualModeManagerDelegate> delegate;
- (int)visualMode;
- (id)init;
- (void)keyboardCameraNotification:;
- (void)setDelegate:;
- (void)enhancedWindowingModeDidChange:;
- (BOOL)textEntryFocusOnExternalDisplay;
- (BOOL)expectedInputModeIsSpecialized;
- (id)delegate;
- (void).cxx_destruct;
- (int)lastVisualMode;
- (void)setLastVisualMode:;
- (BOOL)useVisualModeWindowed;
- (BOOL)windowingModeEnabled;
+ (BOOL)softwareKeyboardAllowedOnExternalScreen;
+ (BOOL)windowingSoftwareKeyboardAllowed;
+ (BOOL)softwareKeyboardAllowedForActiveKeyboardSceneDelegate;
+ (id)visualModeLog;
@end
