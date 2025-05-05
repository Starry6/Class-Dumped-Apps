@interface FLEXArgumentInputFontView : FLEXArgumentInputView
@property (nonatomic) FLEXArgumentInputView fontNameInput;
@property (nonatomic) FLEXArgumentInputView pointSizeInput;
- (id)initWithArgumentTypeEncoding:;
- (void)setBackgroundColor:;
- (void)setInputValue:;
- (id)inputValue;
- (BOOL)inputViewIsFirstResponder;
- (void)layoutSubviews;
- (id)sizeThatFits:;
- (id)fontNameInput;
- (void)setFontNameInput:;
- (id)pointSizeInput;
- (void)setPointSizeInput:;
- (void).cxx_destruct;
+ (double)verticalPaddingBetweenFields;
+ (BOOL)supportsObjCType:withCurrentValue:;
@end
