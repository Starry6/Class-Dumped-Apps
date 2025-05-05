@interface EKSerializableRecurrenceRule : EKSerializableObject
@property (nonatomic) q frequency;
@property (nonatomic) q interval;
@property (nonatomic) EKRecurrenceEnd recurrenceEnd;
@property (nonatomic) q firstDayOfTheWeek;
@property (nonatomic) NSArray daysOfTheWeek;
@property (nonatomic) NSArray daysOfTheMonth;
@property (nonatomic) NSArray daysOfTheYear;
@property (nonatomic) NSArray weeksOfTheYear;
@property (nonatomic) NSArray monthsOfTheYear;
@property (nonatomic) NSArray setPositions;
- (long long)frequency;
- (void).cxx_destruct;
- (long long)interval;
- (id)daysOfTheWeek;
- (id)daysOfTheMonth;
- (id)daysOfTheYear;
- (id)weeksOfTheYear;
- (id)monthsOfTheYear;
- (id)setPositions;
- (id)recurrenceEnd;
- (void)setRecurrenceEnd:;
- (long long)firstDayOfTheWeek;
- (id)initWithRecurrenceRule:;
- (id)createRecurrenceRule:;
+ (id)classesForKey;
@end
