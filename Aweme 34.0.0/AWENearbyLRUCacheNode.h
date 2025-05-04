@interface AWENearbyLRUCacheNode : NSObject
@property (nonatomic) AWENearbyLRUCacheNode prev;
@property (nonatomic) AWENearbyLRUCacheNode next;
@property (nonatomic) @ key;
@property (nonatomic) @ value;
- (id)value;
- (id)next;
- (void)setNext:;
- (void)setKey:;
- (id)key;
- (void)setValue:;
- (void)setPrev:;
- (id)prev;
- (void).cxx_destruct;
@end
