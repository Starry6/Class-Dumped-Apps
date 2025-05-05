@interface CPRMListItem : NSObject
@property (nonatomic) ^^{CGPDFNode} paragraphNodes;
@property (nonatomic) ^{CGPDFPage=} page;
- (id)page;
- (void)dealloc;
- (id)initWithCount:;
- (id)bounds;
- (void)addParagraph:;
- (id)paragraphNodes;
@end
