@interface UIAccessibilityHUDPositionManager : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)keyboardFrameDidChange:;
- (void)updateFramesForManagedHUDsUsingKeyboardFrame:;
- (void)adjustViewPropertiesForHUD:withReferenceView:keyboardFrame:;
- (void)adjustViewPropertiesForHUD:withReferenceView:;
- (void)beginManagingPositionOfHUD:withReferenceView:;
- (void)stopManagingPositionOfHUD:;
+ (id)sharedInstance;
@end
