@interface MIInstallationIdentity : NSObject
@property (nonatomic) NSData installSessionID;
@property (nonatomic) NSData uniqueInstallID;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSessionID:uniqueID:;
- (BOOL)_writeToBundle:fd:fdLocation:error:;
- (BOOL)_writeToBundle:error:;
- (BOOL)writeToBundle:error:;
- (id)installSessionID;
- (void)setInstallSessionID:;
- (id)uniqueInstallID;
- (void)setUniqueInstallID:;
+ (id)newIdentityForBundle:;
+ (id)identityForUpdateOfBundle:error:;
+ (id)installationIdentityForBundle:settingIfNotSet:error:;
+ (id)installSessionIDEAName;
+ (id)uniqueInstallIDEAName;
@end
