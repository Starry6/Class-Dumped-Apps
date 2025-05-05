@interface FLEXArgumentInputStructView : FLEXArgumentInputView
@property (nonatomic) NSArray argumentInputViews;
- (id)initWithArgumentTypeEncoding:;
- (void)setBackgroundColor:;
- (void)setInputValue:;
- (id)inputValue;
- (BOOL)inputViewIsFirstResponder;
- (void)layoutSubviews;
- (id)sizeThatFits:;
- (id)argumentInputViews;
- (void)setArgumentInputViews:;
- (void).cxx_destruct;
+ (void)registerDefaultFieldNames;
+ (double)verticalPaddingBetweenFields;
+ (BOOL)supportsObjCType:withCurrentValue:;
+ (void)registerFieldNames:forTypeEncoding:;
+ (id)customFieldTitlesForTypeEncoding:;
@end
