@interface PPCalendar : NSObject
@property (nonatomic) NSString calendarIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) ^{CGColor=} color;
- (id)calendarIdentifier;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)color;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithEKCalendar:internPool:;
- (id)initWithCalendarIdentifier:title:color:;
- (BOOL)isEqualToCalendar:;
+ (BOOL)supportsSecureCoding;
@end
