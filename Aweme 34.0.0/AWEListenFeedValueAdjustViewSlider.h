@interface AWEListenFeedValueAdjustViewSlider : UISlider
@property (nonatomic) Q style;
- (void)changeAccessibilityLabel;
- (void)accessibilityDecrement;
- (void)setValue:;
- (unsigned long long)style;
- (void)accessibilityIncrement;
- (void)setValue:animated:;
- (unsigned long long)accessibilityTraits;
- (void)setStyle:;
@end
