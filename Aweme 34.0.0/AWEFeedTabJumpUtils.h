@interface AWEFeedTabJumpUtils : NSObject
+ (id)tabBarItemTypeToTabIDMap;
+ (id)getCurrentTimeStamp;
+ (void)postError:forTabId:withAwemeModel:;
+ (BOOL)checkCanLandingTabWithTabID:;
+ (BOOL)isExpiredForDay:timestamp:;
+ (id)referStringToTabIDMap;
+ (id)clearExpireShowRecordWithArray:expireHour:;
+ (id)clearExpireTriggerRecordWithArray:;
+ (BOOL)isTriggeredWithAwemeID:timestamps:;
+ (BOOL)isExpiredForHours:timestamp:;
+ (BOOL)checkFrequencyControlForGuideViewWithStorageManager:withStrategyModel:;
@end
