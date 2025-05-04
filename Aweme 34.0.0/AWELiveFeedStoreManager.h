@interface AWELiveFeedStoreManager : NSObject
@property (nonatomic) NSMutableDictionary dataMap;
@property (nonatomic) NSMutableArray feedPreStreamItem;
- (id)dataMap;
- (void)setDataMap:;
- (void)p_addNotification;
- (void)storeRefreshListWithData:referString:;
- (void)storeLoadMoreListWithData:referString:;
- (void)_storeFeedListWithData:isFetch:referString:;
- (void)storeFeedPreStreamItem:isFetch:referString:;
- (id)feedPreStreamItem;
- (BOOL)adapter_enableUseUpdateLive;
- (id)centerWith:;
- (id)getNowTimestamp;
- (id)_buildCurrenScene:referString:;
- (void)_createVideoFeedModelUseRoomID:userID:sceneID:toCenter:timestamp:status:adSourceType:isLiveWhiteAd:needDowngrade:logID:itemID:;
- (id)_buildSceneUIDKey:userID:;
- (void)readPreStream:referString:;
- (void)setFeedPreStreamItem:;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
+ (id)sharedManager;
@end
