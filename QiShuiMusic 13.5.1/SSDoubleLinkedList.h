@interface SSDoubleLinkedList : NSObject
@property (nonatomic) NSString listIdentifier;
@property (nonatomic) NSArray allNodes;
@property (nonatomic) Q count;
@property (nonatomic) SSDoubleLinkedListNode head;
@property (nonatomic) SSDoubleLinkedListNode tail;
- (void)setListIdentifier:;
- (void)setHead:;
- (id)listIdentifier;
- (id)head;
- (void)removeNode:;
- (id)tail;
- (id)appendObject:;
- (id)init;
- (id)insertObject:;
- (void)removeAllNodes;
- (void)insertNode:;
- (id)allNodes;
- (void)appendNode:;
- (void).cxx_destruct;
- (id)description;
- (void)setTail:;
- (unsigned long long)count;
@end
