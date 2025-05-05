@interface UIKeyboardCandidateViewConfigurationPadFloatingBar : UIKeyboardCandidateViewConfigurationPhoneBarDown
- (id)extendedState;
- (id)initialState;
- (BOOL)willCoverKeyboardLayout;
- (BOOL)allowsPullDownGesture;
@end
