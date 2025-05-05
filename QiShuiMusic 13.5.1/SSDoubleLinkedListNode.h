@interface SSDoubleLinkedListNode : NSObject
@property (nonatomic) NSString listIdentifier;
@property (nonatomic) SSDoubleLinkedListNode previous;
@property (nonatomic) @ object;
@property (nonatomic) SSDoubleLinkedListNode next;
- (void)setListIdentifier:;
- (void)setPrevious:;
- (id)previous;
- (id)next;
- (id)listIdentifier;
- (void)setNext:;
- (void)setObject:;
- (id)init;
- (id)initWithObject:;
- (void).cxx_destruct;
- (id)object;
@end
