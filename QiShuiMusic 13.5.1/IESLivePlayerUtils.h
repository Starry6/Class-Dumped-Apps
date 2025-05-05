@interface IESLivePlayerUtils : NSObject
+ (BOOL)checkPlayerIsDisplayedInScreen:ignorePlayerViewHidden:;
+ (long long)compareStreamData:anotherStreamData:;
+ (BOOL)formatSupportSmoothSwitchWithStreamData:;
+ (long long)iesPlayerViewRotateTypeFromTTPlayerViewRotateType:;
+ (id)livePlayerResolutionByTVLResolutionType:;
+ (void)logWithEventKey:callTrace:content:;
+ (void)logWithEventKey:callTrace:content:player:;
+ (void)logWithEventKey:content:;
+ (id)streamDataDictFromStr:;
+ (id)streamIDWithStreamDataStr:;
+ (unsigned long long)tvlOptionForPlayerOption:;
+ (long long)tvlPlayerViewRotateTypeFromIESLivePlayerViewRotateType:;
+ (long long)veLivePlayerResolutionFromString:;
@end
