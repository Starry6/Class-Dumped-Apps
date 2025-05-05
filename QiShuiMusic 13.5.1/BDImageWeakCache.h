@interface BDImageWeakCache : NSObject
@property (nonatomic) NSMapTable weakCache;
- (void)setWeakCache:;
- (id)init;
- (void)setObject:forKey:;
- (void)removeAllObjects;
- (id)weakCache;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
@end
