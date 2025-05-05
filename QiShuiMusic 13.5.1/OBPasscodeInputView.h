@interface OBPasscodeInputView : UIView
@property (nonatomic) <OBPasscodeInputViewDelegate> delegate;
- (id)intrinsicContentSize;
- (id)passcode;
- (void)setDelegate:;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)delegate;
- (void).cxx_destruct;
- (void)setPasscode:;
- (BOOL)resignFirstResponder;
- (id)passcodeField;
- (void)shake;
@end
