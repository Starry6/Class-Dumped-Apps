@interface IDSMPPublicDeviceIdentityContainer : NSObject
@property (nonatomic) IDSMPPublicLegacyIdentity legacyPublicIdentity;
@property (nonatomic) IDSNGMPublicDeviceIdentity ngmPublicDeviceIdentity;
@property (nonatomic) NSNumber ngmVersion;
- (id)_ngmSealMessage:withEncryptedAttributes:signedWithFullIdentity:error:;
- (id)legacyPublicIdentity;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)_legacySealMessage:signedWithFullIdentity:error:;
- (id)dataRepresentationWithError:;
- (id)sealMessage:withEncryptedAttributes:signedByFullIdentity:usedIdentityWithIdentifier:error:;
- (void).cxx_destruct;
- (id)ngmVersion;
- (id)description;
- (id)ngmPublicDeviceIdentity;
- (id)initWithLegacyPublicIdentity:ngmPublicDeviceIdentity:ngmVersion:;
- (id)sealMessage:withEncryptedAttributes:signedByFullIdentity:usingIdentitiesWithIdentifier:error:;
- (BOOL)isEqual:;
+ (id)identityWithDataRepresentation:error:;
+ (id)identityWithLegacyPublicIdentity:ngmPublicDeviceIdentity:ngmVersion:error:;
@end
