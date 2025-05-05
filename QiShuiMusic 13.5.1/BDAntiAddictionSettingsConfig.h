@interface BDAntiAddictionSettingsConfig : NSObject
@property (nonatomic) NSInteger dialogTimes;
@property (nonatomic) NSInteger dialogInterval;
@property (nonatomic) q weekdayTimeLockLimit;
@property (nonatomic) q weekendTimeLockLimit;
@property (nonatomic) q recordInterval;
@property (nonatomic) q curfewStartTime;
@property (nonatomic) q curfewEndTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)curfewStartTime;
- (void)setDialogTimes:;
- (long long)curfewEndTime;
- (int)dialogInterval;
- (int)dialogTimes;
- (long long)recordInterval;
- (void)setCurfewEndTime:;
- (void)setCurfewStartTime:;
- (void)setDialogInterval:;
- (void)setRecordInterval:;
- (void)setWeekdayTimeLockLimit:;
- (void)setWeekendTimeLockLimit:;
- (long long)weekdayTimeLockLimit;
- (long long)weekendTimeLockLimit;
@end
