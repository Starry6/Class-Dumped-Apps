@interface AWETeenDescriptionTextView : AWETeenBasicDescriptionTextView
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isAccessibilityTraitButton;
@property (nonatomic) BOOL isAds;
@property (nonatomic) NSString adTrailingAccessibilityLabel;
@property (nonatomic) NSArray p_accessibilityElements;
- (BOOL)isAds;
- (void)setIsAds:;
- (id)entityWordAccessibilityLabel:;
- (void)setP_accessibilityElements:;
- (id)p_accessibilityElements;
- (id)fullTextAccessibilityLabel;
- (id)adTrailingAccessibilityLabel;
- (BOOL)isAccessibilityTraitButton;
- (void)setIsAccessibilityTraitButton:;
- (void)setAdTrailingAccessibilityLabel:;
- (void)setIsExpanded:;
- (id)accessibilityLabel;
- (BOOL)isExpanded;
- (id)accessibilityElements;
- (void)setAttributedText:;
- (void).cxx_destruct;
- (void)setAccessibilityElements:;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:;
- (BOOL)shouldGroupAccessibilityChildren;
@end
