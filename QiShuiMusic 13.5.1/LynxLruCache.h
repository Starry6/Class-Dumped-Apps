@interface LynxLruCache : NSObject
@property (nonatomic) NSMapTable dictionary;
@property (nonatomic) LynxLruCacheNode rootNode;
@property (nonatomic) LynxLruCacheNode tailNode;
@property (nonatomic) Q size;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q capacity;
- (void)checkSpace;
- (id)initWithCapacity:recreate:viewEvicted:;
- (void)putNodeToTop:;
- (unsigned long long)capacity;
- (id)dictionary;
- (void)setObject:forKey:;
- (void)setDictionary:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)removeObjectForKey:;
- (id)queue;
- (void)setSize:;
- (id)rootNode;
- (unsigned long long)size;
- (id)tailNode;
- (void)setTailNode:;
- (void)setRootNode:;
- (void)commonSetup;
@end
