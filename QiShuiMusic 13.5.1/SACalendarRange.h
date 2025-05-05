@interface SACalendarRange : AceObject
@property (nonatomic) SACalendar end;
@property (nonatomic) SACalendar start;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnd:;
- (void)setStart:;
- (id)end;
- (id)groupIdentifier;
- (id)start;
- (id)encodedClassName;
+ (id)calendarRange;
+ (id)calendarRangeWithDictionary:context:;
@end
