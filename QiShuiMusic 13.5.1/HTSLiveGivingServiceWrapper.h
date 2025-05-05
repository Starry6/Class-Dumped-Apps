@interface HTSLiveGivingServiceWrapper : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) <IESLivePropsAPI> assetsApi;
@property (nonatomic) BOOL updating;
@property (nonatomic) @? requestAssetListTaskBlock;
- (id)assetsApi;
- (void)downloadEffects:type:;
- (void)fetchAssetListToUser:;
- (id)initWithRoom:trackContext:;
- (BOOL)isAdLiveRoom:;
- (void)p_downloadEffects:type:;
- (id)requestAssetListTaskBlock;
- (void)scheduleResouceAutoUpdate;
- (void)setAssetsApi:;
- (void)setRequestAssetListTaskBlock:;
- (void)updateGiftListForOtherRoom:forOtherUser:fetchGiftListScene:fetchEffectMomentType:fetchGiftListMomentType:downloadEffects:selectedGiftID:params:completion:;
- (void)updateGiftListIncrementallyForOtherRoom:forOtherUser:fetchGiftListScene:fetchEffectMomentType:downloadEffects:requestGiftIDs:pageType:params:completion:;
- (void)updateGiftListIncrementallyWithFetchGiftListScene:fetchEffectMomentType:downloadEffects:requestGiftIDs:pageType:params:completion:;
- (void)updateResourceList:scene:toUser:fetchGiftListMomentType:downloadEffects:selectedGiftID:params:giftListApiCompletion:;
- (BOOL)updating;
- (void)setUpdating:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
