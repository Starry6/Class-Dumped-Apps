@interface ICLRUCache : NSObject
@property (nonatomic) Q maxSize;
@property (nonatomic) NSArray allKeys;
@property (nonatomic) <ICLRUCacheDelegate> delegate;
- (unsigned long long)maxSize;
- (void)setObject:forKey:;
- (id)allKeys;
- (void)setDelegate:;
- (void)removeAllObjects;
- (id)delegate;
- (id)initWithMaxSize:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (void)p_removeOldestObject;
+ (void)purgeAllCaches;
+ (id)cacheCollection;
@end
