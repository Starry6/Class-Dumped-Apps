@interface VCSDate : NSObject
@property (nonatomic) NSDateComponents components;
@property (nonatomic) BOOL floating;
@property (nonatomic) BOOL dateOnly;
- (BOOL)floating;
- (id)components;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)dateOnly;
- (id)nsDateWithLocalTimeZone:;
- (id)dateForEndOfDay;
- (id)dateByAddingDays:;
- (id)initWithDateComponents:floating:dateOnly:;
- (id)initWithYear:month:day:hour:minute:second:floating:dateOnly:;
- (id)initWithDateString:;
- (id)dateWithTimeComponentsFromDate:;
+ (id)dateListFromData:;
@end
