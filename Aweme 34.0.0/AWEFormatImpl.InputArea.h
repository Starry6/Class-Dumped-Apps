@interface AWEFormatImpl.InputArea : UIView
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (void)textViewDidChange:;
- (void)textViewDidEndEditing:;
- (BOOL)textViewShouldBeginEditing:;
- (id)sizeThatFits:;
- (void)handleEmojiBtnClickedWithSender:;
- (void)handleKeyboardBtnClickedWithSender:;
- (void)keyboardWillHideWithSender:;
- (void)keyboardWillShowWithSender:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
