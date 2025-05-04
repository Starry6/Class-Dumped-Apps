@interface AWEDitoPOIFavoritePreloadManager : NSObject
@property (nonatomic) NSMutableDictionary modelDict;
- (BOOL)isCacheExist:;
- (id)modelDict;
- (void)setModelDict:;
- (void)registerMessage;
- (void)handleLynxBroadcastNotification:;
- (void)didReceivePOICollectionStatusChanged:;
- (BOOL)cacheResponseData:withKey:;
- (id)fetchResponseDataWithKey:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)preloadConfig;
+ (id)cacheConfig;
+ (id)collectFMPOptConfig;
+ (BOOL)isFMPOptEnable;
+ (BOOL)isSubTabPrefetchEnable;
+ (long long)requestCount;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
