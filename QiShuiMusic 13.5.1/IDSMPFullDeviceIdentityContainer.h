@interface IDSMPFullDeviceIdentityContainer : NSObject
@property (nonatomic) NSData cachedLegacySerializedData;
@property (nonatomic) IDSMPFullLegacyIdentity legacyFullIdentity;
@property (nonatomic) IDSNGMFullDeviceIdentity ngmFullDeviceIdentity;
@property (nonatomic) NSNumber ngmVersion;
- (id)legacyFullIdentity;
- (id)_ngmUnsealMessage:signedByPublicIdentity:;
- (id)_legacyUnsealMessage:signedByPublicIdentity:error:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)_ngmValidateEncryptingAndSigningIdentity:forMessage:;
- (id)cachedLegacySerializedData;
- (id)unsealMessage:signedByPublicIdentity:usingIdentityWithIdentifier:error:;
- (id)dataRepresentationWithError:;
- (void).cxx_destruct;
- (id)ngmVersion;
- (id)ngmFullDeviceIdentity;
- (id)publicIdentityWithError:;
- (id)description;
- (void)setCachedLegacySerializedData:;
- (id)_ngmSynchronouslyUnsealMessage:signedByPublicIdentity:error:;
- (BOOL)isEqual:;
- (id)unsealMessage:signedByPublicIdentity:usingIdentityWithIdentifier:;
- (id)initWithFullLegacyIdentity:ngmFullDeviceidentity:ngmVersion:legacyFullIdentitySerializedData:;
+ (id)identityWithLegacyFullIdentity:ngmFullDeviceIdentity:ngmVersion:error:;
+ (id)identityWithDataRepresentation:error:;
+ (id)_identityWithLegacyFullIdentity:ngmFullDeviceIdentity:ngmVersion:legacyFullIdentitySerializedData:error:;
@end
