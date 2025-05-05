@interface AMSDoubleLinkedListNode : NSObject
@property (nonatomic) NSString listIdentifier;
@property (nonatomic) AMSDoubleLinkedListNode previous;
@property (nonatomic) @ object;
@property (nonatomic) AMSDoubleLinkedListNode next;
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
