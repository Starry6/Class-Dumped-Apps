@interface AWEBatManStorageUtils : NSObject
+ (void)setCommonLocalUserNoticeWithType:;
+ (id)getTempUserNameWithDeviceId:;
+ (void)setTempUserNameWithName:deviceId:;
+ (id)getDefaultUserNameWithUserId:;
+ (void)setDefaultUserNameWithName:userId:;
+ (BOOL)getCommonLocalUserNoticeWithType:;
+ (BOOL)canPlayAdToIncreaseTrialTimeWithUserId:timesLimit:;
+ (BOOL)isCanShowNetworkQualityPushWithUserId:;
+ (void)saveNetworkQualityPushDateWithuserId:date:;
+ (long long)yesterdayStartTime;
+ (long long)todayStartTime;
+ (void)modifyPlayAdTimesWithUserId:timesLimit:;
@end
