@interface PKTextInputUtilities : NSObject
+ (id)textInputTraitsFromTextInput:;
+ (BOOL)textInputTraitsAreSecure:;
+ (id)_notesTextViewFromResponder:;
+ (BOOL)isResponderSupportedTextInput:;
+ (BOOL)isResponderSupportedTextInput:outTextInputTraits:;
+ (BOOL)isResponderSupportedTextInput:checkForNotes:outTextInputTraits:;
+ (long long)responderTextInputSource:;
+ (BOOL)shouldAvoidNonEditableView:;
+ (id)nonEditableTextInputForView:;
+ (void)markAnalyticsForInsertionWithTexts:rangeToReplace:;
+ (void)markAnalyticsForInsertionWithTexts:rangeToReplace:withAlternatives:;
+ (void)markAnalyticsForDeletionCount:rangeToReplace:;
+ (void)markAnalyticsForSelectionChange:relativeRangeBefore:;
+ (void)markAnalyticsForUndo;
+ (void)markAnalyticsForRedo;
@end
