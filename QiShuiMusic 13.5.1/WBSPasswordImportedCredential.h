@interface WBSPasswordImportedCredential : NSObject
@property (nonatomic) NSString user;
@property (nonatomic) NSString password;
@property (nonatomic) NSURL url;
@property (nonatomic) NSURL otpAuthURL;
@property (nonatomic) NSString notesEntry;
- (id)url;
- (id)init;
- (id)password;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)user;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)notesEntry;
- (id)initWithUser:password:url:;
- (id)initWithUser:password:url:sidecarData:;
- (id)urlCredentialWithPersistence:;
- (id)encryptedURLCredentialWithPersistence:;
- (id)otpAuthURL;
+ (BOOL)supportsSecureCoding;
@end
