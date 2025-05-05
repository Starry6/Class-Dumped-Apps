@interface BDREInGraphNode : BDREGraphNode
@property (nonatomic) NSString identifier;
- (BOOL)canPassWithFootPrint:;
- (id)initWithRightIdentifier:;
- (id)valueWithFootPrint:;
- (void)visitWithFootPrint:previousNode:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
@end
