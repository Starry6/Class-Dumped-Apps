@interface UIWebFormDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)textFieldDidBeginEditing:inFrame:;
- (void)textFieldDidEndEditing:inFrame:;
- (void)textDidChangeInTextField:inFrame:;
- (void)textDidChangeInTextArea:inFrame:;
- (void)didFocusTextField:inFrame:;
- (BOOL)textField:doCommandBySelector:inFrame:;
- (void)frame:sourceFrame:willSubmitForm:withValues:submissionListener:;
- (void)willSendSubmitEventToForm:inFrame:withValues:;
- (id)initWithWebBrowserView:;
- (void)dataSourceHasChangedForFrame:;
- (BOOL)formWasEdited;
- (id)suggestionsForString:inputIndex:;
- (BOOL)hasCurrentSuggestions;
- (void)acceptedAutoFillWord:;
- (void)_didEditFormElement:inFrame:;
- (BOOL)_shouldIgnoreFormTextChangesInFrame:;
- (void)_clearEditedFormsInFrame:;
@end
