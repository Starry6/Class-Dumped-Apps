@interface EKPredicate : CADPredicate
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSArray calendars;
@property (nonatomic) NSString title;
- (id)startDate;
- (void)setStartDate:;
- (id)predicateFormat;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)calendars;
- (void)setEndDate:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)title;
- (void).cxx_destruct;
- (void)setCalendars:;
- (id)initWithCalendars:;
- (id)databasesToQuery;
- (void)createCalendarMaps;
- (id)calendarRowIDsForDatabaseID:;
- (id)restrictedCalendarRowIDsForDatabaseID:;
- (void)setRestrictedCalendarRowIDs:forDatabaseID:;
+ (BOOL)supportsSecureCoding;
@end
