@interface AWETeenTimeLockManager : NSObject
@property (nonatomic) Q weekdayTimeLockLimit;
@property (nonatomic) Q weekendTimeLockLimit;
@property (nonatomic) Q todayTimeLockLimit;
@property (nonatomic) NSArray weekdayTimeLockLimitOptions;
@property (nonatomic) NSArray weekendTimeLockLimitOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)teenModeDidChange:isLogout:;
- (unsigned long long)todayTimeLockLimit;
- (unsigned long long)weekendTimeLockLimit;
- (unsigned long long)weekdayTimeLockLimit;
- (void)updateLocalTimeLockLimitWithWeekdayTime:weekendTime:;
- (void)fetchTimeLockSettingsWithContext:;
- (void)setWeekdayTimeLockLimit:;
- (void)setWeekendTimeLockLimit:;
- (BOOL)isTodayWeekend;
- (void)updateTimeLockLimitWithWeekdayTime:weekendTime:password:completion:;
- (id)weekdayTimeLockLimitOptions;
- (id)weekendTimeLockLimitOptions;
- (id)init;
- (id)currentDate;
+ (id)sharedInstance;
@end
