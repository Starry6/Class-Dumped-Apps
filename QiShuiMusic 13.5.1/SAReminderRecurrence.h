@interface SAReminderRecurrence : AceObject
@property (nonatomic) NSArray daysOfTheMonth;
@property (nonatomic) NSArray daysOfTheWeek;
@property (nonatomic) NSArray daysOfTheYear;
@property (nonatomic) NSString frequencyTimeUnit;
@property (nonatomic) q interval;
@property (nonatomic) NSArray monthsOfTheYear;
@property (nonatomic) NSArray weeksOfTheYear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setInterval:;
- (id)encodedClassName;
- (long long)interval;
- (id)daysOfTheWeek;
- (void)setDaysOfTheWeek:;
- (id)daysOfTheMonth;
- (void)setDaysOfTheMonth:;
- (id)daysOfTheYear;
- (void)setDaysOfTheYear:;
- (id)weeksOfTheYear;
- (void)setWeeksOfTheYear:;
- (id)monthsOfTheYear;
- (void)setMonthsOfTheYear:;
- (id)frequencyTimeUnit;
- (void)setFrequencyTimeUnit:;
+ (id)recurrence;
+ (id)recurrenceWithDictionary:context:;
@end
