@interface SACalendarRecurrence : AceObject
@property (nonatomic) q endCount;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSInteger frequency;
@property (nonatomic) q interval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)frequency;
- (id)groupIdentifier;
- (void)setFrequency:;
- (void)setEndDate:;
- (id)endDate;
- (void)setInterval:;
- (id)encodedClassName;
- (long long)interval;
- (long long)endCount;
- (void)setEndCount:;
+ (id)recurrence;
+ (id)recurrenceWithDictionary:context:;
@end
