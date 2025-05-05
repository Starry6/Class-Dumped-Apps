@interface EKRecurrenceDayOfWeek : NSObject
@property (nonatomic) q dayOfTheWeek;
@property (nonatomic) q weekNumber;
- (id)iCalendarDescription;
- (long long)weekNumber;
- (id)initWithDayOfTheWeek:weekNumber:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)iCalendarValueFromDayOfTheWeek:;
- (void)encodeWithCoder:;
- (id)description;
- (long long)dayOfTheWeek;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)dayOfWeek:weekNumber:;
+ (id)dayOfWeek:;
+ (long long)icsWeekDayFromDayOfTheWeek:;
@end
