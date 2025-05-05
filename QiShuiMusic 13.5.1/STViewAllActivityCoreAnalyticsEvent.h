@interface STViewAllActivityCoreAnalyticsEvent : NSObject
@property (nonatomic) q daysSinceLastView;
@property (nonatomic) q userAgeGroup;
@property (nonatomic) BOOL userIsManaged;
@property (nonatomic) BOOL userIsRemote;
@property (nonatomic) NSString name;
@property (nonatomic) NSString description;
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (id)name;
- (long long)userAgeGroup;
- (BOOL)userIsRemote;
- (BOOL)userIsManaged;
- (id)initWithDaysSinceLastView:userAgeGroup:userIsManaged:userIsRemote:;
- (long long)daysSinceLastView;
+ (id)description;
@end
