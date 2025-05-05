@interface AKAuthorizationLoginChoice : NSObject
@property (nonatomic) NSString user;
@property (nonatomic) NSString site;
@property (nonatomic) BOOL appleIDAuth;
@property (nonatomic) BOOL createAppleID;
- (void)setUser:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)user;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)site;
- (id)initWithUser:site:;
- (void)setSite:;
- (BOOL)isAppleIDAuthorization;
- (void)setAppleIDAuth:;
- (BOOL)shouldCreateAppleID;
- (void)setCreateAppleID:;
+ (BOOL)supportsSecureCoding;
@end
