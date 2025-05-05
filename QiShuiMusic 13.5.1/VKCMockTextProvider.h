@interface VKCMockTextProvider : NSObject
@property (nonatomic) NSMutableArray lines;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL isRunningTest;
- (id)characterRangeAtPoint:;
- (id)closestPositionToPoint:withinRange:;
- (id)caretRectForPosition:;
- (void)setText:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)lines;
- (id)text;
- (BOOL)isRunningTest;
- (void)setLines:;
- (id)allLineQuads;
- (id)adjustTextRangeToSelectableRange:;
- (id)smallestSelectableRangeForPosition:;
- (id)rangeOfWordForPosition:;
- (id)rangeOfLineForPosition:;
- (id)firstRectForRange:documentView:contentRect:;
- (id)selectionRectsForRange:documentView:contentRect:;
- (void)setIsRunningTest:;
- (void)loadInfoFromDictionary:;
- (id)lineForIndex:;
- (id)wordForIndex:;
@end
