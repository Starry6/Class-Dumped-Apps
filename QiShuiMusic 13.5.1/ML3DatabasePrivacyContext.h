@interface ML3DatabasePrivacyContext : NSObject
@property (nonatomic) NSString bundleID;
- (id)init;
- (id)initWithCoder:;
- (id)initWithClientIdentity:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAuditToken:;
- (void)logDatabasePrivacyAccess;
- (id)bundleID;
- (id)initWithPAApplication:;
+ (BOOL)supportsSecureCoding;
+ (void)logDatabasePrivacyAccessWithAuditToken:;
+ (id)sharedContext;
@end
