@interface AWEProfileMentionLabel : YYLabel
@property (nonatomic) NSMutableArray accessibilityElementsArray;
@property (nonatomic) {CGSize=dd} lastLabelSize;
@property (nonatomic) NSAttributedString lastAttributedString;
@property (nonatomic) NSMutableArray accessibilityViewArray;
- (id)accessibilityViewArray;
- (id)lastLabelSize;
- (id)lastAttributedString;
- (void)setLastAttributedString:;
- (void)setLastLabelSize:;
- (BOOL)calculateMentionAccessibilityIfNeeded;
- (void)updateLastCalculateMessage;
- (void)calculateMentionAccessibility;
- (id)accessibilityElementsArray;
- (void)setAccessibilityElementsArray:;
- (void)setAccessibilityViewArray:;
- (void).cxx_destruct;
- (void)calculate;
@end
