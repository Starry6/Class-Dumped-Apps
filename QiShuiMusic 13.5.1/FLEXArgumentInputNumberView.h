@interface FLEXArgumentInputNumberView : FLEXArgumentInputTextView
- (id)initWithArgumentTypeEncoding:;
- (void)setInputValue:;
- (id)inputValue;
+ (BOOL)supportsObjCType:withCurrentValue:;
@end
