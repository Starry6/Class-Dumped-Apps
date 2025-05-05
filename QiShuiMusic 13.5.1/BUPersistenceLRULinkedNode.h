@interface BUPersistenceLRULinkedNode : NSObject
@property (nonatomic) NSString nodeValue;
@property (nonatomic) BUPersistenceLRULinkedNode previous;
@property (nonatomic) BUPersistenceLRULinkedNode next;
- (id)initWithNodeVlaue:;
- (void)setPrevious:;
- (id)previous;
- (id)next;
- (void)setNext:;
- (void).cxx_destruct;
- (id)nodeValue;
- (void)setNodeValue:;
@end
