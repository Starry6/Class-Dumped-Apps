@interface AWEIMYYLabel : YYLabel
@property (nonatomic) NSString aweim_replaceAccessibilityLabel;
@property (nonatomic) NSDictionary highlightActionMap;
- (id)highlightActionMap;
- (id)aweim_replaceAccessibilityLabel;
- (void)setAweim_replaceAccessibilityLabel:;
- (void)setHighlightActionMap:;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformMagicTap;
@end
