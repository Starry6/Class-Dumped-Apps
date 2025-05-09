@interface AWEFantaCommerceVVFeatureProvider : AWEFantaAbstractDataCollector
@property (nonatomic) NSMutableArray commerceVV24hList;
@property (nonatomic) NSMutableArray commerceVVTodayList;
@property (nonatomic) NSMutableArray commerceVVSessionList;
@property (nonatomic) NSMutableArray totalVV24hList;
@property (nonatomic) NSMutableArray totalVVTodayList;
@property (nonatomic) NSMutableArray totalVVSessionList;
@property (nonatomic) NSObject<OS_dispatch_queue> VVFeatureQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onDataCollector:collectData:;
- (void)p_addObserver;
- (void)readDataFromDiskIfNeeded;
- (id)VVFeatureQueue;
- (id)commerceVV24hList;
- (id)commerceVVTodayList;
- (id)totalVV24hList;
- (id)totalVVTodayList;
- (void)setCommerceVV24hList:;
- (void)setCommerceVVTodayList:;
- (void)setTotalVV24hList:;
- (void)setTotalVVTodayList:;
- (void)addFeatureToTotalList:;
- (void)addFeatureToCommerceList:;
- (void)clear24hFeatureListIfNeeded;
- (void)clearTodayFeatureListIfNeeded;
- (id)commerceVVSessionList;
- (id)totalVVSessionList;
- (id)featureForKey:;
- (void)loadCommerceVVFeatureProvider;
- (void)setCommerceVVSessionList:;
- (void)setTotalVVSessionList:;
- (void)setVVFeatureQueue:;
- (id)init;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:;
+ (id)sharedInstance;
@end
