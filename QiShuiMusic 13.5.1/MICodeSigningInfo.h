@interface MICodeSigningInfo : NSObject
@property (nonatomic) NSString signerIdentity;
@property (nonatomic) NSString signerOrganization;
@property (nonatomic) NSString codeInfoIdentifier;
@property (nonatomic) NSString teamIdentifier;
@property (nonatomic) NSNumber signatureVersion;
@property (nonatomic) NSDictionary entitlements;
@property (nonatomic) Q codeSignerType;
@property (nonatomic) Q profileValidationType;
@property (nonatomic) Q signingInfoSource;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)initForTesting;
- (id)entitlements;
- (id)teamIdentifier;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)initWithDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)codeInfoIdentifier;
- (id)signatureVersion;
- (id)initWithSignerIdentity:signerOrganization:codeInfoIdentifier:teamIdentifier:signatureVersion:entitlements:signerType:profileType:signingInfoSource:;
- (id)initWithDictionaryRepresentation:fromSource:;
- (unsigned long long)codeSignerType;
- (unsigned long long)profileValidationType;
- (unsigned long long)signingInfoSource;
@end
