@interface AWETeenAwemeDataCacheManager : NSObject
@property (nonatomic) NSMutableDictionary dataCacheDictonary;
- (void)setDataCacheDictonary:;
- (id)dataCacheDictonary;
- (void)clearDataCache;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (void)setObject:forKey:;
+ (id)sharedInstance;
@end
