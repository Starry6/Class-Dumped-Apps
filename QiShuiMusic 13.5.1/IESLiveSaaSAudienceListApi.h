@interface IESLiveSaaSAudienceListApi : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
- (void)getCombinedAudienceListWithCallbackInMainThread:completion:;
- (void)getOnlineAudienceListWithCallbackInMainThread:completion:;
- (void)getSeqUserAudienceListWithcursor:count:isRefresh:callbackInMainThread:completion:;
- (void)getThisRoomAudienceListWithCallbackInMainThread:completion:;
- (void)getThisWeekAudienceListWithCallbackInMainThread:completion:;
- (void)getTotalAudienceListWithCallbackInMainThread:completion:;
- (void)getVipAudienceListWithCallbackInMainThread:completion:;
- (void)requestRankListWithLinkUser:scene:completion:;
- (id)roomModel;
- (void)setRoomModel:;
- (void).cxx_destruct;
@end
