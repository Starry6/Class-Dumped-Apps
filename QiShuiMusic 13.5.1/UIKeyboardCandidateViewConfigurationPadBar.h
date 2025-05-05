@interface UIKeyboardCandidateViewConfigurationPadBar : UIKeyboardCandidateViewConfigurationPhoneBar
- (id)extendedState;
- (id)initialState;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldResizeKeyboardBackdrop;
- (double)candidateDefaultFontSize;
- (BOOL)shouldAlwaysShowSortControl;
- (id)arrowButtonSeparatorImage;
- (id)edgeSeparatorImage;
@end
