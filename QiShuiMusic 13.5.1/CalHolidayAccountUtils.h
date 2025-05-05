@interface CalHolidayAccountUtils : NSObject
+ (id)logHandle;
+ (void)ensureHolidayAccountExistsWithAccountStore:;
+ (id)_createUnsavedHolidayAccountWithAccountStore:;
+ (void)setHolidayCalendarIsEnabled:withAccountStore:;
+ (BOOL)holidayCalendarIsEnabledWithAccountStore:;
+ (BOOL)_isEnabledWithAccount:;
+ (id)holidayAccountDescription;
+ (id)_holidayAccountWithAccountStore:;
@end
