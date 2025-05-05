@interface CKMemoryCache : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableDictionary cache;
@property (nonatomic) NSRecursiveLock lock;
- (BOOL)containsObjectForKey:;
- (void)setObject:forKey:;
- (void)setName:;
- (void)setCache:;
- (id)initWithName:;
- (void)removeAllObjects;
- (id)lock;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)name;
- (id)cache;
- (void)removeObjectForKey:;
- (void)setLock:;
@end
