@interface AWESearchCustomCrashInfoHelper : NSObject
+ (void)setFilterInfoWithTabKey:logId:;
+ (BOOL)enableCrashReport;
+ (void)recordSearchContextAndFilterValue:Key:;
+ (void)recordSearchCustomCrashInfo:;
@end
