@interface BNUser.SelectEnrollView : BNUser.BasePickerView
- (id)initWithCoder:;
- (id)initWithFrame:;
- (long long)pickerView:numberOfRowsInComponent:;
- (id)pickerView:viewForRow:forComponent:reusingView:;
@end
