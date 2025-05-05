@interface IMDoubleLinkedListNode : NSObject
@property (nonatomic) IMDoubleLinkedListNode prev;
@property (nonatomic) IMDoubleLinkedListNode next;
@property (nonatomic) @ object;
- (id)next;
- (void)setNext:;
- (id)prev;
- (void)setObject:;
- (id)initWithObject:;
- (void)setPrev:;
- (void).cxx_destruct;
- (id)object;
- (void)removeFromList;
- (void)orphan;
@end
