@interface AWEAwemeDataCacheManager : NSObject
@property (nonatomic) NSMutableDictionary dataCacheDictonary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataCacheDictonary:;
- (void)splashWillAppear;
- (void)splashDidAppear;
- (void)splashDidDisappear:;
- (void)splashDidClick;
- (void)splashDidSkip;
- (void)livePlayerLoadFirstFrame:;
- (id)dataCacheDictonary;
- (id)init;
- (void)clearDataCache;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (void)setObject:forKey:;
+ (id)sharedInstance;
@end
