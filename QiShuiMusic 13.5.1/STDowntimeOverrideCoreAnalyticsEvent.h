@interface STDowntimeOverrideCoreAnalyticsEvent : NSObject
@property (nonatomic) BOOL downtimeEnabled;
@property (nonatomic) BOOL gracePeriodUsed;
@property (nonatomic) BOOL scheduleEnabled;
@property (nonatomic) q hourOfDay;
@property (nonatomic) BOOL userIsManaged;
@property (nonatomic) NSString name;
@property (nonatomic) NSString description;
@property (nonatomic) NSDictionary payload;
- (long long)hourOfDay;
- (id)payload;
- (id)name;
- (BOOL)downtimeEnabled;
- (id)initWithDowntimeEnabled:gracePeriodUsed:scheduleEnabled:hourOfDay:userIsManaged:;
- (BOOL)gracePeriodUsed;
- (BOOL)scheduleEnabled;
- (BOOL)userIsManaged;
+ (id)description;
@end
