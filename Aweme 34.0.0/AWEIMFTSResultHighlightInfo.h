@interface AWEIMFTSResultHighlightInfo : NSObject
@property (nonatomic) NSIndexSet highlightRangeList;
@property (nonatomic) NSString textWithoutSpace;
@property (nonatomic) NSIndexSet spaceIndex;
@property (nonatomic) NSString text;
- (void)setHighlightRange:;
- (BOOL)addHighlightRangeWithKeyElement:;
- (void)enumerateHighlightRangesUsingBlock:;
- (id)getSubInfoFormIndex:;
- (void)appendHighlightInfo:;
- (void)appendPlainText:;
- (id)highlightRangeList;
- (void)setHighlightRangeList:;
- (id)textWithoutSpace;
- (void)setSpaceIndex:;
- (void)setTextWithoutSpace:;
- (void)setText:;
- (id)text;
- (id)initWithText:;
- (void).cxx_destruct;
- (id)highlightRange;
- (id)spaceIndex;
+ (id)getKeyElementArr:;
+ (id)getNoSpaceKeywords:;
+ (id)findLocationOfString:inContent:;
@end
