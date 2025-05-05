@interface SACalendar : AceObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSString timeZoneId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setTimeZoneId:;
- (id)date;
- (id)timeZoneId;
- (id)encodedClassName;
- (void)setDate:;
+ (id)calendar;
+ (id)calendarWithDictionary:context:;
@end
