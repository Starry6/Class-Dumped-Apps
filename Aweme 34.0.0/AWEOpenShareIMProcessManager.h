@interface AWEOpenShareIMProcessManager : NSObject
+ (void)updateCompletionRespWithStatusCode:completionResp:;
+ (void)reportIMMonitorsWithResp:code:transferBack:didChooseMultiple:;
+ (void)getGameInvitationIMInfoFromShareRespInfo:completion:;
+ (void)reportCardMonitorWith:resp:;
+ (void)reportPanelShowMonitor:isFromIM:didChooseMultiple:;
+ (void)reportPanelClickMonitor:returnToThirdClicked:isFromIM:didChooseMultiple:;
+ (void)imShareMicroAppWithResp:params:completion:;
+ (void)imShareMusicCardWithResp:withReq:params:completion:;
+ (void)imShareLinkWithResp:withReq:params:completion:;
+ (void)imShareImageWithResp:withReq:asset:completion:;
+ (void)shareGameAddGroupWithId:openId:clientKey:addGroupType:groupType:completionResp:completion:;
+ (void)jumpToContactWithOpenId:targetOpenId:clientKey:completionResp:completion:;
+ (void)shareGameInvitationWithShareResponse:completionResp:completion:;
+ (void)jumpToAlbumWithResp:completion:;
+ (void)jumpToProfileWithOpenId:targetOpenId:clientKey:extraParams:completionResp:completion:;
@end
