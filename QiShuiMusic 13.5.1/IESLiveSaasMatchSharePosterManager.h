@interface IESLiveSaasMatchSharePosterManager : NSObject
+ (void)loadChampionSharePanelWithBaseView:targetImage:isPreView:;
+ (void)loadMatchInfoSharePosterViewWithBaseView:targetImage:param:shareModel:isPreView:completion:;
+ (void)loadShareImageUrlToPanelWithBaseView:targetImage:param:isPreView:completion:;
+ (id)mapLiveRoomModelWithEpisode:;
+ (void)p_showShareTicketWithModel:;
+ (void)showChampionSharePanelWithTargetView:param:;
+ (void)showForecastSharePanelWithTargetView:param:;
+ (void)showMatchInfoSharePanelWithTargetImage:param:;
+ (void)showShareImageUrlToPanelWithModel:;
+ (void)showSharePanelWithType:targetImage:param:;
+ (void)showShareTicketWithModel:;
+ (BOOL)targetImageVisible:;
@end
