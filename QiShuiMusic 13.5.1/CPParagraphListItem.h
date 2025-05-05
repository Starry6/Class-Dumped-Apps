@interface CPParagraphListItem : NSObject
@property (nonatomic) CPList list;
@property (nonatomic) NSInteger number;
- (id)init;
- (void)dealloc;
- (int)number;
- (void)dispose;
- (void)setList:;
- (void)finalize;
- (void)setNumber:;
- (id)list;
- (unsigned int)paragraphCount;
- (id)paragraphAtIndex:;
- (void)addParagraph:;
@end
