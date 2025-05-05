@interface ECDKIMPublicKey : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) Q hashingAlgorithm;
@property (nonatomic) Q signingAlgorithm;
@property (nonatomic) NSString notes;
@property (nonatomic) NSData publicKeyData;
@property (nonatomic) NSString serviceType;
@property (nonatomic) NSString flags;
- (id)notes;
- (id)version;
- (id)serviceType;
- (void).cxx_destruct;
- (id)initWithRecord:;
- (id)description;
- (id)flags;
- (id)publicKeyData;
- (unsigned long long)signingAlgorithm;
- (unsigned long long)hashingAlgorithm;
- (id)initWithVersion:hashingAlgorithm:signingAlgorithm:notes:publicKeyData:serviceType:flags:;
- (id)initWithKeyValueDictionary:;
- (void)_parseVersionFromDictionary:;
- (void)_parseAcceptableHashingAlgorithmsFromDictionary:;
- (void)_parseSigningAlgorithmFromDictionary:;
- (void)_parseNotesFromDictionary:;
- (void)_parsePublicKeyDataFromDictionary:;
- (void)_parseServiceTypeFromDictionary:;
- (void)_parseFlagsFromDictionary:;
@end
