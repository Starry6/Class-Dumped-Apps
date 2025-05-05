@interface IXAppInstallCoordinatorSeed : NSObject
@property (nonatomic) NSUUID uniqueIdentifier;
@property (nonatomic) Q creator;
@property (nonatomic) I creatorEUID;
@property (nonatomic) Q intent;
@property (nonatomic) IXApplicationIdentity identity;
@property (nonatomic) Q installationDomain;
- (unsigned long long)intent;
- (void)setIdentity:;
- (void)setUniqueIdentifier:;
- (id)identity;
- (id)uniqueIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setIntent:;
- (id)copyWithZone:;
- (unsigned long long)creator;
- (void)setCreator:;
- (unsigned long long)installationDomain;
- (void)setInstallationDomain:;
- (unsigned int)creatorEUID;
- (void)setCreatorEUID:;
+ (BOOL)supportsSecureCoding;
@end
