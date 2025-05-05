@interface WebDefaultFormDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)textFieldDidBeginEditing:inFrame:;
- (void)textFieldDidEndEditing:inFrame:;
- (void)textDidChangeInTextField:inFrame:;
- (void)textDidChangeInTextArea:inFrame:;
- (void)didFocusTextField:inFrame:;
- (BOOL)textField:doCommandBySelector:inFrame:;
- (void)frame:sourceFrame:willSubmitForm:withValues:submissionListener:;
- (void)willSendSubmitEventToForm:inFrame:withValues:;
+ (id)sharedFormDelegate;
@end
