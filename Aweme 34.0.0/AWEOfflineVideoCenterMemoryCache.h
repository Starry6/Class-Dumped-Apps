@interface AWEOfflineVideoCenterMemoryCache : NSObject
@property (nonatomic) YYMemoryCache cache;
- (void)setCache:;
- (id)cache;
- (void).cxx_destruct;
+ (id)sharedManager;
+ (void)removeObjectForKey:;
+ (id)objectForKey:;
+ (void)setObject:forKey:;
@end
