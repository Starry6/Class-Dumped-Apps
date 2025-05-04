@interface AWENetworkCache : NSObject
@property (nonatomic) <AWEUniversalCacheType> memoryCache;
@property (nonatomic) <AWEUniversalCacheType> diskCache;
@property (nonatomic) NSObject<OS_dispatch_queue> cacheQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveMemoryWarningNotification;
- (void)setDiskCache:;
- (void)removeAllCaches;
- (void)objectForStrategy:completion:;
- (id)init;
- (void)setCacheQueue:;
- (id)memoryCache;
- (id)getItem:;
- (void)removeObjectForKey:;
- (id)diskCache;
- (void)saveItem:;
- (void).cxx_destruct;
- (void)setMemoryLimit:;
- (id)cacheQueue;
- (void)setObject:forKey:;
- (void)setMemoryCache:;
@end
