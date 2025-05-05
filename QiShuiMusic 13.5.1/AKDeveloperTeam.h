@interface AKDeveloperTeam : NSObject
@property (nonatomic) NSString userIdentifier;
@property (nonatomic) NSString teamID;
@property (nonatomic) NSString privateEmail;
@property (nonatomic) NSDictionary apps;
- (id)teamID;
- (id)userIdentifier;
- (id)apps;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUserIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (void)setApps:;
- (void)setTeamID:;
- (id)initWithResponseInfo:;
- (id)privateEmail;
- (void)setPrivateEmail:;
+ (BOOL)supportsSecureCoding;
@end
