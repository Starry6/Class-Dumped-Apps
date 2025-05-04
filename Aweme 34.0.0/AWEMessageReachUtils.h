@interface AWEMessageReachUtils : NSObject
+ (double)getCurrentServerTime;
+ (double)getCurrentServerTimeDefaultLocalTime;
+ (id)mergeTwoBizParams:bizParams2:;
+ (id)storageKeyWithUserID:;
+ (BOOL)isOtherMode;
+ (id)messageReachPrecheckComponentKey;
+ (long long)getCurrentMediaTimeForMillisecond;
+ (id)getDescriptionStringWithUnreadModel:;
+ (id)getBadgeComponentIDWithTabID:;
+ (BOOL)isSelectedWithChannelID:;
+ (id)compactMapAsLoc:;
+ (void)stringByAppendingSymbolAndString:symbol:aString:;
+ (id)messageReachServerFrequencyGlobalKey;
+ (id)messageReachServerFrequencySourceKey;
+ (id)messageReachPitayaParamsKey;
+ (id)messageReachColdLaunchRecoveryKey;
+ (id)messageReachTemplateRecordKey;
+ (id)messageReachLastConsumeTimeKey;
+ (id)getDescriptionStringWithUpdateInfo:;
+ (id)storageUserKey;
+ (id)getDescriptionStringWithDotDetail:;
+ (long long)indexOfTabWithChannelID:;
+ (id)messageReachSubscribeSuccessPopCountKey;
+ (id)toJsonString:;
@end
