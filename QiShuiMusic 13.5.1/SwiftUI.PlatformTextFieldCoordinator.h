@interface SwiftUI.PlatformTextFieldCoordinator : SwiftUI.PlatformViewCoordinator
- (BOOL)textFieldShouldReturn:;
- (void)textFieldDidBeginEditing:;
- (void)textFieldDidEndEditing:reason:;
- (void)textViewDidBeginEditing:;
- (void)textViewDidEndEditing:;
- (void)textViewDidChange:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (void)textChanged:;
- (id)init;
- (void)primaryActionTriggered:;
- (void).cxx_destruct;
@end
