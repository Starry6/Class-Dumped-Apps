@interface DOMNodeIterator : DOMObject
@property (nonatomic) DOMNode root;
@property (nonatomic) I whatToShow;
@property (nonatomic) <DOMNodeFilter> filter;
@property (nonatomic) BOOL expandEntityReferences;
@property (nonatomic) DOMNode referenceNode;
@property (nonatomic) BOOL pointerBeforeReferenceNode;
- (id)filter;
- (void)detach;
- (void)dealloc;
- (id)root;
- (id)nextNode;
- (id)previousNode;
- (id)referenceNode;
- (unsigned int)whatToShow;
- (BOOL)expandEntityReferences;
- (BOOL)pointerBeforeReferenceNode;
@end
