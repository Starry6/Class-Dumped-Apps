@interface CalDAVOfficeHour : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSDateComponents startDate;
@property (nonatomic) NSDateComponents endDate;
- (id)startDate;
- (BOOL)enabled;
- (void)setStartDate:;
- (id)initWithCoder:;
- (void)setEndDate:;
- (void)encodeWithCoder:;
- (id)endDate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
+ (id)logHandle;
+ (BOOL)supportsSecureCoding;
+ (id)officeHoursFromData:;
+ (id)officeHoursFromICS:;
+ (id)dataFromOfficeHours:;
+ (id)_gregorianGMTCalendar;
+ (id)icsFromOfficeHours:;
@end
