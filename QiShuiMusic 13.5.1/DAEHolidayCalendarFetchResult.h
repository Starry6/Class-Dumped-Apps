@interface DAEHolidayCalendarFetchResult : NSObject
@property (nonatomic) NSString URLString;
@property (nonatomic) NSString region;
@property (nonatomic) NSString language;
@property (nonatomic) NSString calendarDescription;
- (void)setRegion:;
- (id)URLString;
- (void)setLanguage:;
- (id)language;
- (id)region;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setCalendarDescription:;
- (id)description;
- (id)calendarDescription;
- (void)setURLString:;
+ (BOOL)supportsSecureCoding;
@end
