@interface IMDoubleLinkedList : NSObject
@property (nonatomic) IMDoubleLinkedListNode first;
@property (nonatomic) IMDoubleLinkedListNode last;
@property (nonatomic) Q count;
- (void)setLast:;
- (void)appendObject:;
- (id)init;
- (id)last;
- (void)dealloc;
- (BOOL)containsObject:;
- (void)removeAllObjects;
- (id)first;
- (void)setFirst:;
- (void).cxx_destruct;
- (id)allObjects;
- (unsigned long long)count;
- (void)pushLinkedListNode:;
- (void)removeLinkedListNode:;
- (void)appendLinkedListNode:;
- (void)pushObject:;
- (id)popObject;
@end
