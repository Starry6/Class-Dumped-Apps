@interface HybridLRULinkedNode : NSObject
@property (nonatomic) @ key;
@property (nonatomic) @ value;
@property (nonatomic) HybridLRULinkedNode prev;
@property (nonatomic) HybridLRULinkedNode next;
- (id)next;
- (void)setNext:;
- (id)prev;
- (id)key;
- (void)setPrev:;
- (void)setKey:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)initWithKey:value:;
@end
