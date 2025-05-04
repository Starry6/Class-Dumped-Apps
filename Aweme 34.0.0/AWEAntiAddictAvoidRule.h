@interface AWEAntiAddictAvoidRule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)satisfySystemHotLaunchProtectWithHotLaunchTime:hotLaunchProtectTime:now:;
- (BOOL)satisfySystemColdLaunchProtectWithColdLaunchTime:coldLaunchProtectTime:now:;
- (BOOL)satisfyUserHotLaunchProtectWithHotLaunchTime:hotLaunchProtectTimeForUserRemind:now:;
- (BOOL)satisfyUserColdLaunchProtectWithColdLaunchTime:coldLaunchProtectTimeForUserRemind:now:;
- (BOOL)satisfySystemLaunchProtectWithColdLaunchTime:coldLaunchProtectTime:hotLaunchTime:hotLaunchProtectTime:now:isHotLaunch:;
- (BOOL)satisfyUserLaunchProtectWithColdLaunchTime:coldLaunchProtectTimeForUserRemind:hotLaunchTime:hotLaunchProtectTimeForUserRemind:now:isHotLaunch:;
- (BOOL)satisfyRemindIntervalWithLastActionEndTime:remindTimeInterval:now:;
- (BOOL)satisfyPushAvoidV1WithVideoShownRecords:now:;
- (BOOL)satisfyPushAvoidV2WithPushShownRecord:pushClickedRecord:now:inPastDays:;
+ (id)sharedRule;
+ (id)moduleName;
@end
