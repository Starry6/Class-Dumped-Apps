@interface BDRETrieGraphNode : BDREGraphNode
@property (nonatomic) BDRETrieNode rootNode;
- (void)travelWithFootPrint:;
- (void)visitWithFootPrint:previousNode:;
- (id)init;
- (void).cxx_destruct;
- (id)rootNode;
- (void)setRootNode:;
@end
