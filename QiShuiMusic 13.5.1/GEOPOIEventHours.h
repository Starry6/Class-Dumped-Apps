@interface GEOPOIEventHours : NSObject
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) NSArray hours;
- (id)dateInterval;
- (id)init;
- (void)setDateInterval:;
- (id)initWithCoder:;
- (id)initWithDateInterval:;
- (void)encodeWithCoder:;
- (id)hours;
- (void).cxx_destruct;
- (void)setHours:;
- (id)initWithDateTimeRange:;
+ (BOOL)supportsSecureCoding;
+ (id)eventHoursForDateTimeRanges:;
@end
