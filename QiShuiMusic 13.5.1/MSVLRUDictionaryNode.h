@interface MSVLRUDictionaryNode : NSObject
@property (nonatomic) @ key;
@property (nonatomic) @ object;
@property (nonatomic) MSVLRUDictionaryNode next;
@property (nonatomic) MSVLRUDictionaryNode prev;
- (id)next;
- (void)setNext:;
- (id)prev;
- (void)setObject:;
- (id)key;
- (id)initWithKey:object:;
- (void)setPrev:;
- (void).cxx_destruct;
- (id)object;
- (id)copyWithZone:;
@end
