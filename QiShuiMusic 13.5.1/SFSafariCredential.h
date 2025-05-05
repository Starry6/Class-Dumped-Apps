@interface SFSafariCredential : NSObject
@property (nonatomic) <SFSafariPasswordCredential> externalCredential;
@property (nonatomic) NSString user;
@property (nonatomic) NSString password;
@property (nonatomic) NSString site;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) BOOL external;
- (id)password;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)user;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isExternal;
- (BOOL)isEqual:;
- (id)creationDate;
- (id)site;
- (id)externalCredential;
- (id)initWithUser:password:site:creationDate:;
- (id)initWithExternalCredential:;
+ (BOOL)supportsSecureCoding;
@end
