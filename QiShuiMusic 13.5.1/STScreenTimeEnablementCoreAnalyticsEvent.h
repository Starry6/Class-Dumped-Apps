@interface STScreenTimeEnablementCoreAnalyticsEvent : NSObject
@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) q userAgeGroup;
@property (nonatomic) q numberOfGuardians;
@property (nonatomic) BOOL pinSet;
@property (nonatomic) BOOL userIsRemote;
@property (nonatomic) NSString name;
@property (nonatomic) NSString description;
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (id)name;
- (BOOL)screenTimeEnabled;
- (long long)userAgeGroup;
- (BOOL)userIsRemote;
- (id)initWithScreenTimeEnabled:numberOfGuardians:pinSet:userAgeGroup:userIsRemote:;
- (long long)numberOfGuardians;
- (BOOL)pinSet;
+ (id)description;
@end
