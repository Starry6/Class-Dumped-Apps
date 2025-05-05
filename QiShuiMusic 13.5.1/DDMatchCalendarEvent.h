@interface DDMatchCalendarEvent : DDMatch
@property (nonatomic) BOOL allDay;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSTimeZone startTimeZone;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSTimeZone endTimeZone;
- (BOOL)isAllDay;
- (id)startDate;
- (id)endDate;
- (void).cxx_destruct;
- (id)initWithDDScannerResult:;
- (id)startTimeZone;
- (id)endTimeZone;
@end
