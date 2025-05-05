@interface MCSelfSignedCertificatePayload : MCCertificatePayload
@property (nonatomic) NSString keyType;
@property (nonatomic) Q keySize;
@property (nonatomic) BOOL isHardwareBound;
@property (nonatomic) I keyUsage;
@property (nonatomic) NSArray extendedKeyUsage;
@property (nonatomic) Q lifetime;
- (unsigned long long)lifetime;
- (unsigned long long)keySize;
- (BOOL)isRoot;
- (void).cxx_destruct;
- (id)keyType;
- (id)verboseDescription;
- (BOOL)isIdentity;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)subtitle1Description;
- (BOOL)isHardwareBound;
- (id)extendedKeyUsage;
- (id)validateExtendedKeyUsage:;
- (id)persistentResourceID;
- (unsigned int)keyUsage;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
