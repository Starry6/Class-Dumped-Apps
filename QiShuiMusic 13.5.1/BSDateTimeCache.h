@interface BSDateTimeCache : NSObject
- (id)init;
- (BOOL)isWithinNextWeek:;
- (void)dealloc;
- (BOOL)isTomorrow:;
- (BOOL)isYesterday:;
- (double)nextWeek;
- (BOOL)isToday:;
- (void)_resetAndConfigure;
- (double)today;
- (BOOL)isWithinPrevWeek:includeToday:;
- (double)tomorrow;
- (id)description;
- (double)prevWeek;
- (BOOL)isWithinPrevWeek:;
- (double)yesterday;
+ (id)sharedInstance;
@end
