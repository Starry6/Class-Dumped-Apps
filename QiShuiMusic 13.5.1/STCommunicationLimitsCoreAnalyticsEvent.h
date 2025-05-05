@interface STCommunicationLimitsCoreAnalyticsEvent : NSObject
@property (nonatomic) BOOL communicationLimited;
@property (nonatomic) BOOL contactManagementEnabled;
@property (nonatomic) BOOL contactEditingAllowed;
@property (nonatomic) q userAgeGroup;
@property (nonatomic) BOOL userIsRemote;
@property (nonatomic) NSString name;
@property (nonatomic) NSString description;
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (id)name;
- (BOOL)contactManagementEnabled;
- (id)initWithCommunicationLimited:contactManagementEnabled:contactEditingAllowed:userAgeGroup:userIsRemote:;
- (BOOL)communicationLimited;
- (BOOL)contactEditingAllowed;
- (long long)userAgeGroup;
- (BOOL)userIsRemote;
+ (id)description;
@end
