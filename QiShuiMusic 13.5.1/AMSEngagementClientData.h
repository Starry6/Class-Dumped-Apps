@interface AMSEngagementClientData : NSObject
@property (nonatomic) NSMutableDictionary apps;
@property (nonatomic) NSString lastSyncedBuild;
- (id)apps;
- (void)saveToDisk;
- (void)addCachedResponseData:cacheInfo:appIdentifier:;
- (id)destinationsForEvent:;
- (id)cachedResponseDataForEvent:;
- (id)initWithCacheObject:;
- (void).cxx_destruct;
- (void)setAllowedEvents:appIdentifier:;
- (void)_cleanUpApps;
- (void)setLastSyncedBuild:;
- (id)lastSyncedBuild;
- (void)setApps:;
+ (void)_registerNotifications;
+ (BOOL)_isDaemon;
+ (void)erase;
+ (id)clientDataURL;
+ (id)_sharedQueue;
+ (id)loadFromDisk;
+ (id)_fetchClientData;
+ (void)_assertEngagementd;
@end
