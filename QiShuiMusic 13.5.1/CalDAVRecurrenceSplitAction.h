@interface CalDAVRecurrenceSplitAction : NSObject
@property (nonatomic) NSURL resourceURL;
@property (nonatomic) NSDate recurrenceDate;
@property (nonatomic) NSString uidForCreatedSeries;
@property (nonatomic) BOOL isFloating;
@property (nonatomic) BOOL isAllDay;
- (BOOL)isAllDay;
- (BOOL)isFloating;
- (id)resourceURL;
- (id)recurrenceDate;
- (void).cxx_destruct;
- (id)uidForCreatedSeries;
- (id)initWithResourceURL:recurrenceDate:uidForCreatedSeries:floating:allday:;
@end
