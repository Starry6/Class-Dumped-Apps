@interface AWEAwemeOfflineGuideV2EnterManager : NSObject
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) q blockOfflineToastCount;
@property (nonatomic) NSString needShowToastItemID;
@property (nonatomic) NSMutableArray hideNetworkTipItemIDs;
@property (nonatomic) NSString offlineGuideCellEnterFrom;
- (id)hideNetworkTipItemIDs;
- (id)needShowToastItemID;
- (void)setNeedShowToastItemID:;
- (void)fireScrollTopGuideCellWithEnterFrom:awemeModel:;
- (void)setHideNetworkTipItemIDs:;
- (long long)blockOfflineToastCount;
- (void)setBlockOfflineToastCount:;
- (void)firePlayOfflineAwemeModelWithEnterFrom:;
- (id)offlineGuideCellEnterFrom;
- (void)setOfflineGuideCellEnterFrom:;
- (void)registerDelegate:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void)unregisterDelegate:;
- (void).cxx_destruct;
+ (BOOL)shouldBlockOfflineToast;
+ (unsigned long long)getNetStatus;
+ (id)sharedInstance;
@end
