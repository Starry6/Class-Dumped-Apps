@interface AWEMultiTabActivityConfig : NSObject
+ (id)multiTabSchemaWhitelist;
+ (id)walletSchema;
+ (id)multiTabActivityConfig;
+ (id)activitiesFromSetting;
+ (BOOL)walletEntryShow;
+ (BOOL)disableAdjustScrollInset;
+ (id)activitiesForCurrentTime:ignoreTimeCheckList:;
+ (id)activitySchemaForID:;
@end
