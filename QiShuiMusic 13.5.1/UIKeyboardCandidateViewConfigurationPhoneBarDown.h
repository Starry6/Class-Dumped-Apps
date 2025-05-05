@interface UIKeyboardCandidateViewConfigurationPhoneBarDown : UIKeyboardCandidateViewConfigurationPhoneBar
- (id)extendedState;
- (id)initialState;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldResizeKeyboardBackdrop;
- (BOOL)willCoverKeyboardLayout;
- (BOOL)allowsPullDownGesture;
@end
