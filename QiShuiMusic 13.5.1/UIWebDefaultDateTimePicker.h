@interface UIWebDefaultDateTimePicker : NSObject
@property (nonatomic) DOMHTMLInputElement _inputElement;
@property (nonatomic) UIDatePicker _datePicker;
- (void)dealloc;
- (id)controlView;
- (id)_datePicker;
- (void)_dateChangeHandler:;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)_timeZoneOffsetFromGMT:;
- (void)_dateChangedSetAsNumber;
- (void)_dateChangedSetAsString;
- (void)_dateChanged;
- (id)initWithDOMHTMLInputElement:datePickerMode:;
- (id)_sanitizeInputValueForFormatter:;
- (id)_inputElement;
- (void)set_inputElement:;
- (void)set_datePicker:;
@end
