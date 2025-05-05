@interface CDBiCalFixUps : NSObject
+ (BOOL)fixEndDates:;
+ (BOOL)_fixEndDateForEvent:withOriginalEvent:detachments:;
+ (double)_durationForEvent:;
@end
