@interface WBSHistorySessionIntervalCache : NSObject
- (id)init;
- (id)initWithCalendar:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (double)beginningOfSessionContainingTime:;
- (double)_beginningOfSessionContainingTime:;
- (void)_getSessionIntervalForTime:beginningOfDay:beginningOfNextDay:;
@end
