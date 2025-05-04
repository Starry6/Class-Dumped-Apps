@interface AWEDiscoverDPlayletTrackService : NSObject
+ (void)trackNetworkServiceName:response:error:otherParams:;
+ (void)trackPlayletModelServiceName:playletModels:;
+ (void)trackMixNetworkServiceName:model:error:;
+ (void)trackVideoPaymentServiceName:mixID:modelList:error:;
+ (void)trackVideoPaymentServiceName:model:awemeID:error:;
+ (void)trackAwemeModelServiceName:awemeModels:otherParams:;
+ (void)trackEventStayPageWithDuration:logParams:;
+ (void)trackPlayletIAAPersistentButtonRemindClickWithCurrentModel:extraParams:withNode:;
+ (void)trackPlayletIAAPersistentButtonRemindShowWithCurrentModel:extraParams:withNode:;
+ (void)trackPlayletIAAGuidanceShowWithCurrentModel:targetModel:extraParams:withNode:;
+ (void)trackPlayletIAAGuidanceCloseWithCurrentModel:targetModel:extraParams:withNode:;
+ (void)trackPlayletIAAGuidanceClickWithCurrentModel:targetModel:extraParams:withNode:;
+ (void)trackPlayletIAAPersistentButtonShowWithCurrentModel:extraParams:withNode:;
+ (void)trackPlayletIAAPersistentButtonClickWithCurrentModel:extraParams:withNode:;
+ (void)trackPlayletInnerRecommendButtonShow:extraParams:withNode:;
+ (void)trackPlayletInnerRecommendButtonClick:extraParams:withNode:;
+ (void)trackCurrentThreadLogExceptionTypeWithCustomParams:;
+ (void)trackErrorPlayletVideo:name:otherParams:;
+ (id)getTrackPlayletIAAGuidanceCommonParamWithCurrentModel:targetModel:extraParams:withNode:withEvent:;
+ (id)getTrackPlayletIAAPersistentButtonCommonParamWithCurrentModel:extraParams:withNode:withEvent:;
@end
