@interface WKSelectSinglePicker : UIPickerView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithView:;
- (void)dealloc;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)numberOfComponentsInPickerView:;
- (long long)pickerView:numberOfRowsInComponent:;
- (id)pickerView:attributedTitleForRow:forComponent:;
- (void)pickerView:didSelectRow:inComponent:;
- (void)selectRow:inComponent:extendingSelection:;
@end
