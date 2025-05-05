@interface BDMannorAbilityManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)detailViewControllerWith:logExtra:adExtraData:refer:tag:;
+ (void)openAppStoreWith:logExtra:;
+ (BOOL)openOtherAppWith:adExtraData:logExtra:refer:tag:callback:;
+ (BOOL)openOtherAppWith:logExtra:;
+ (void)openWeChatWith:logExtra:;
+ (void)openWeChatWith:logExtra:wechatMiniappInfo:adExtraData:refer:tag:callback:;
+ (id)parseRulesFromRaw:;
+ (void)reportFeedbackInfoWithParams:completionHandler:;
+ (void)requestDislikeWithParams:completionHandler:;
+ (void)requestFeedbackReportInfo;
+ (void)requestFeedbackReportInfoWith:;
+ (void)sendTrackV3WithTrackConfig:areaKey:eventName:dynamicParams:;
+ (void)sendTrackWithTrackConfig:areaKey:eventName:dynamicParams:;
+ (void)showFeedbackViewWithModel:logExtra:completionHandler:;
+ (void)trackAdShowEventWith:componentType:lifecycle:;
+ (void)trackCoreEventReportWith:logExtra:params:watchedDuration:;
@end
