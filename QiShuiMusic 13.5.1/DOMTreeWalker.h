@interface DOMTreeWalker : DOMObject
@property (nonatomic) DOMNode root;
@property (nonatomic) I whatToShow;
@property (nonatomic) <DOMNodeFilter> filter;
@property (nonatomic) BOOL expandEntityReferences;
@property (nonatomic) DOMNode currentNode;
- (id)filter;
- (void)dealloc;
- (id)root;
- (id)nextNode;
- (id)previousNode;
- (id)previousSibling;
- (id)lastChild;
- (id)firstChild;
- (id)parentNode;
- (id)nextSibling;
- (unsigned int)whatToShow;
- (BOOL)expandEntityReferences;
- (id)currentNode;
- (void)setCurrentNode:;
@end
