@interface PSDateTimePickerCell : PSTableCell
- (void)dealloc;
- (void)setTitle:;
- (id)initWithStyle:reuseIdentifier:specifier:;
- (void).cxx_destruct;
- (id)datePicker;
- (void)timeZoneChanged:;
+ (double)preferredHeight;
@end
