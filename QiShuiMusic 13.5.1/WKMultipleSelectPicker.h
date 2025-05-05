@interface WKMultipleSelectPicker : UIPickerView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithView:;
- (BOOL)selectFormAccessoryHasCheckedItemAtRow:;
- (void)dealloc;
- (void)layoutSubviews;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)numberOfComponentsInPickerView:;
- (long long)pickerView:numberOfRowsInComponent:;
- (id)pickerView:viewForRow:forComponent:reusingView:;
- (void)pickerView:row:column:checked:;
- (void)selectRow:inComponent:extendingSelection:;
- (long long)findItemIndexAt:;
@end
