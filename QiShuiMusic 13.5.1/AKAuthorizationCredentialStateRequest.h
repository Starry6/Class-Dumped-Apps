@interface AKAuthorizationCredentialStateRequest : NSObject
@property (nonatomic) NSString teamID;
@property (nonatomic) NSString clientID;
@property (nonatomic) NSString altDSID;
@property (nonatomic) BOOL shouldIgnoreUserID;
@property (nonatomic) BOOL shouldIgnoreTeamID;
@property (nonatomic) NSString userID;
- (id)teamID;
- (id)userID;
- (void)setAltDSID:;
- (id)altDSID;
- (void)setClientID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)clientID;
- (void)setTeamID:;
- (BOOL)shouldIgnoreUserID;
- (void)setShouldIgnoreUserID:;
- (BOOL)shouldIgnoreTeamID;
- (void)setShouldIgnoreTeamID:;
+ (BOOL)supportsSecureCoding;
@end
