@interface AWENearbyClientAIManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> syncLock;
@property (nonatomic) NSObject<OS_dispatch_semaphore> fbSyncLock;
@property (nonatomic) NSObject<OS_dispatch_semaphore> feedCardSyncLock;
@property (nonatomic) NSLock passiveRefreshLock;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} packageStatusLock;
@property (nonatomic) NSMapTable locationReqCallBacks;
@property (nonatomic) NSMapTable feedButtonCallBacks;
@property (nonatomic) NSMapTable passiveRefreshCallbacks;
@property (nonatomic) NSMapTable feedCardDetailPreloadCallbacks;
@property (nonatomic) NSMutableDictionary packageStatusDic;
@property (nonatomic) NSMutableDictionary latestTriggerMessages;
@property (nonatomic) PTYMemoryCache memoryCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)queryPackage:callback:;
- (void)removeMessageHandler:;
- (void)registerFeedButtonMessageWithListener:handler:;
- (id)getLatestTriggerMessageOfPackage:;
- (void)triggerPackage:event:params:callback:;
- (void)setSyncLock:;
- (void)registerLocationMessageWithListener:handler:;
- (void)registerPassiveRefreshFeedsMessageWithListener:handler:;
- (void)getLifeMallRealTimeDataWithScene:strategy:callback:;
- (void)getLifeMallRealTimeDataWithScene:featureCollection:strategy:callback:;
- (void)registerFeedCardDetailPreloadMessageWithListener:handler:;
- (void)registerBussinessMessage;
- (id)latestTriggerMessages;
- (id)handleLocationTriggerMessage:;
- (id)handleFeedButtonTriggerMessage:;
- (id)handlePassiveRefreshFeedsTriggerMessage:;
- (void)handleFeedCardDetailPreloadWithMessage:;
- (id)locationReqCallBacks;
- (id)fbSyncLock;
- (id)feedButtonCallBacks;
- (id)passiveRefreshLock;
- (id)passiveRefreshCallbacks;
- (id)feedCardSyncLock;
- (id)feedCardDetailPreloadCallbacks;
- (void)downloadPackage:callback:;
- (BOOL)checkPackageReadyForBusiness:;
- (void)updatePackageReadyForBusiness:;
- (id)packageStatusDic;
- (id)defaultTaskConfig;
- (void)runTaskWithBusinessName:params:callback:;
- (id)getLifeMallRealTimeDataCacheWithScene:featureCollection:isSuccess:;
- (id)getLifeMallRealTimeDataCacheWithScene:isSuccess:;
- (void)setFbSyncLock:;
- (void)setFeedCardSyncLock:;
- (void)setPassiveRefreshLock:;
- (id)packageStatusLock;
- (void)setPackageStatusLock:;
- (void)setLocationReqCallBacks:;
- (void)setFeedButtonCallBacks:;
- (void)setPassiveRefreshCallbacks:;
- (void)setFeedCardDetailPreloadCallbacks:;
- (void)setPackageStatusDic:;
- (void)setLatestTriggerMessages:;
- (id)init;
- (void)dealloc;
- (id)memoryCache;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)syncLock;
- (void)setMemoryCache:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
