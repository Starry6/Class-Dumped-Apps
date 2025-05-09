@interface AWEConcernSkylightUpdateFrequencyUtil : NSObject
+ (void)recordLatestClickLiveTime;
+ (BOOL)todayHasShow;
+ (void)markTodayHasShow;
+ (void)increaseShowButNotClickTimes;
+ (id)midnightTimeStampKey;
+ (void)onUpdateCellShow;
+ (void)onUpdateCellClick;
+ (BOOL)shouldDowngradeInsert;
+ (BOOL)hasClickLiveDuringSevenDays;
+ (void)clear;
@end
