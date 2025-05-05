@interface BDUGFlowStatisticsTracker : NSObject
+ (void)monitorFlowQueryInfoWithReason:;
+ (void)monitorFlowCarrierIdWithReason:;
+ (void)trackerSDKLanch;
+ (id)commonClickParams;
+ (id)commonMonitorParams;
+ (void)event:params:;
+ (void)getCommonMonitorParams:;
+ (void)getCommonTrackerParams:;
+ (void)getFlowInfoCommonParams:;
+ (void)monitorFlowCarrierIdResponseWithReason:success:errorCode:errorMsg:;
+ (void)monitorFlowGetSignResponseWithReason:success:errorCode:errorMsg:;
+ (void)monitorFlowGetSignWithReason:;
+ (void)monitorFlowQueryInfoResponseWithReason:success:errorCode:errorMsg:;
+ (void)registerMonitorClass:;
+ (void)registerTrackerClass:;
+ (void)trackService:metric:category:extra:;
+ (void)trackerClickContinueWithType:;
+ (void)trackerClickFreeFlowReturnWithType:;
+ (void)trackerClickFreeFlowWithType:;
+ (void)trackerFreeFlowShowWithType:isFree:isUseout:;
+ (void)trackerIos12Carrier;
+ (void)trackerPopupsWithType:;
+ (void)trackerQueryIdResultWithReason:isSuccess:carrierId:;
+ (void)trackerQueryIdWithReason:;
+ (void)trackerQueryPopupsResultWithIsSuccess:isFree:isUseout:isPopup:;
+ (void)trackerRequestFailureWithAction:carrier:errorCode:errMsg:;
@end
