@interface AWESwitchNetSettings : NSObject
+ (BOOL)enableSwitchNet;
+ (BOOL)enableSwitchNetMain;
+ (void)_aweLazyRegisterStaticLoad;
+ (void)registerABExperiment;
+ (long long)enableSwitchNetEntrance;
+ (long long)toastResetSecond;
+ (long long)toastRepeatInterval;
+ (long long)toastShowMaxCount;
+ (long long)newUserLimitDay;
+ (BOOL)enableNotOnlyInMain;
+ (id)switchNetLimitSceneConfig;
+ (id)switchNetToastFreCtrConfig;
@end
