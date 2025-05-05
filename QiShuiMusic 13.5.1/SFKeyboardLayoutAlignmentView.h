@interface SFKeyboardLayoutAlignmentView : UIView
@property (nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)willMoveToWindow:;
- (void)_stopObservingKeyboardNotifications;
- (void)_keyboardChanged:;
- (void)setAutomaticKeyboardFrameTrackingDisabled:;
- (id)_frameInBoundsForKeyboardFrame:;
- (void)_updateConstraintsToMatchKeyboardFrame:;
- (void)_updateConstraintsForKeyboardNotification:;
- (void)_matchInitialKeyboardFrame;
- (void)_removeConstraints;
- (void)_startObservingKeyboardNotificationsForScreen:;
- (BOOL)automaticKeyboardFrameTrackingDisabled;
- (void)_addConstraints;
@end
