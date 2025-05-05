@interface HybridLRUCache : NSObject
@property (nonatomic) NSMutableDictionary cache;
@property (nonatomic) Q capacity;
@property (nonatomic) <HybridLRUCacheDelegate> delegate;
@property (nonatomic) NSArray allKeys;
- (void)_moveNodeToHead:;
- (unsigned long long)capacity;
- (void)setCapacity:;
- (void)setObject:forKey:;
- (void)_removeNode:;
- (id)allKeys;
- (void)setDelegate:;
- (void)setCache:;
- (id)delegate;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)cache;
- (void)removeObjectForKey:;
- (id)initWithCapacity:;
- (void)_compact;
@end
