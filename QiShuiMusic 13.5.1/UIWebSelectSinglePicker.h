@interface UIWebSelectSinglePicker : UIPickerView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)numberOfComponentsInPickerView:;
- (long long)pickerView:numberOfRowsInComponent:;
- (id)pickerView:attributedTitleForRow:forComponent:;
- (void)pickerView:didSelectRow:inComponent:;
- (id)initWithDOMHTMLSelectElement:allItems:;
@end
