@interface CPAnalyticsEvent : NSObject
@property (nonatomic) NSDictionary payload;
@property (nonatomic) CPAnalyticsSystemProperties systemProperties;
@property (nonatomic) NSCalendar gregorianCalendar;
@property (nonatomic) NSString name;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)payload;
- (id)gregorianCalendar;
- (id)propertyForKey:;
- (id)systemProperties;
- (void).cxx_destruct;
- (id)initWithName:payload:systemProperties:;
- (id)timestamp;
- (id)name;
- (id)copyRawPayload;
+ (id)dayOfWeekFromDate:;
+ (id)hourOfDayFromDate:;
@end
