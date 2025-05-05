@interface CPList : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} spacer;
@property (nonatomic) NSInteger type;
@property (nonatomic) I ordinalPrefixLength;
@property (nonatomic) I ordinalSuffixLength;
@property (nonatomic) CPParagraphListItem parentItem;
- (unsigned int)itemCount;
- (void)addItem:;
- (id)init;
- (void)dealloc;
- (void)dispose;
- (void)setType:;
- (void)finalize;
- (int)type;
- (id)itemAtIndex:;
- (id)parentItem;
- (void)setParentItem:;
- (BOOL)containsParagraph:;
- (BOOL)isMultilevel;
- (id)spacer;
- (void)setSpacer:;
- (unsigned int)ordinalPrefixLength;
- (void)setOrdinalPrefixLength:;
- (unsigned int)ordinalSuffixLength;
- (void)setOrdinalSuffixLength:;
@end
