@interface STDebug.BNPickerViewController : BNCommonAdapter.BNBasicViewController
- (BOOL)textFieldShouldBeginEditing:;
- (id)pickerView:attributedTitleForRow:forComponent:;
- (void)pickerView:didSelectRow:inComponent:;
- (long long)numberOfComponentsInPickerView:;
- (long long)pickerView:numberOfRowsInComponent:;
- (void)onTextFieldChangedWithTextField:;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
