@interface GEOPlaceDailyHours : NSObject
@property (nonatomic) {_NSRange=QQ} dayOfWeekRange;
@property (nonatomic) NSArray openIntervals;
- (void).cxx_destruct;
- (id)description;
- (id)dayOfWeekRange;
- (id)openIntervals;
+ (id)dailyHours:forDays:;
+ (id)getPlaceDailyHoursForWeekday:placeDailyHours:;
@end
