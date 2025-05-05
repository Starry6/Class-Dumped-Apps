@interface FLEXArgumentInputObjectView : FLEXArgumentInputTextView
@property (nonatomic) UISegmentedControl objectTypeSegmentControl;
@property (nonatomic) Q inputType;
- (id)initWithArgumentTypeEncoding:;
- (void)didChangeType;
- (void)setInputType:;
- (void)setInputValue:;
- (id)inputValue;
- (void)populateTextAreaFromValue:;
- (id)sizeThatFits:;
- (void)layoutSubviews;
- (double)topInputFieldVerticalLayoutGuide;
- (id)objectTypeSegmentControl;
- (void)setObjectTypeSegmentControl:;
- (unsigned long long)inputType;
- (void).cxx_destruct;
+ (BOOL)supportsObjCType:withCurrentValue:;
+ (unsigned long long)preferredDefaultTypeForObjCType:withCurrentValue:;
@end
