@interface DMFFetchStreamEventsRequest : DMFTaskRequest
@property (nonatomic) NSString organizationIdentifier;
@property (nonatomic) NSArray eventIdentifiers;
@property (nonatomic) NSDate startDate;
- (id)startDate;
- (id)eventIdentifiers;
- (void)setStartDate:;
- (void)setOrganizationIdentifier:;
- (id)organizationIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setEventIdentifiers:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
@end
