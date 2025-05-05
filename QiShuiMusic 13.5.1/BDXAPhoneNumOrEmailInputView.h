@interface BDXAPhoneNumOrEmailInputView : BDXAPhoneNumInputView
- (void)layoutSubviews;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)textFieldDidChange:;
@end
