@interface IESLiveEffectsAPIImpl : HTSLiveApi
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fetchEffectsListWithLiveRoomModel:tintTags:fetchMomentType:forAssetIDs:assetIdVersionString:enableEffectsApiV2:userPortrait:completion:;
- (id)p_createAssetIdArrayWithArray:;
- (id)p_generateRealError:response:;
- (void)p_trackFetchEffectsListCallbackWitStatus:trackExtra:;
- (void)p_trackFetchEffectsListCallbackWithResponse:error:trackExtra:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
