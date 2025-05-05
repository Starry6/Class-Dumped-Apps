@interface FLEXArgumentInputStringView : FLEXArgumentInputTextView
- (id)initWithArgumentTypeEncoding:;
- (void)setInputValue:;
- (id)inputValue;
+ (BOOL)supportsObjCType:withCurrentValue:;
@end
