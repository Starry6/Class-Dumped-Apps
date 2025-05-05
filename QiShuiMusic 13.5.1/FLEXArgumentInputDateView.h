@interface FLEXArgumentInputDateView : FLEXArgumentInputView
@property (nonatomic) UIDatePicker datePicker;
- (id)initWithArgumentTypeEncoding:;
- (void)setInputValue:;
- (id)inputValue;
- (void)layoutSubviews;
- (id)sizeThatFits:;
- (id)datePicker;
- (void)setDatePicker:;
- (void).cxx_destruct;
+ (BOOL)supportsObjCType:withCurrentValue:;
@end
