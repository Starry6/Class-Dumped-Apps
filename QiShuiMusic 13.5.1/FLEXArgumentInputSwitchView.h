@interface FLEXArgumentInputSwitchView : FLEXArgumentInputView
@property (nonatomic) UISwitch inputSwitch;
- (id)initWithArgumentTypeEncoding:;
- (void)setInputValue:;
- (id)inputValue;
- (void)switchValueDidChange:;
- (void)layoutSubviews;
- (id)sizeThatFits:;
- (id)inputSwitch;
- (void)setInputSwitch:;
- (void).cxx_destruct;
+ (BOOL)supportsObjCType:withCurrentValue:;
@end
