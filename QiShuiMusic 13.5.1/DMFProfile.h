@interface DMFProfile : NSObject
@property (nonatomic) NSString UUID;
@property (nonatomic) Q type;
@property (nonatomic) NSString identifier;
@property (nonatomic) q profileVersion;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString organization;
@property (nonatomic) NSString profileDescription;
@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) BOOL hasRemovalPasscode;
@property (nonatomic) BOOL isEncrypted;
@property (nonatomic) NSArray signerCertificates;
@property (nonatomic) NSArray payloads;
@property (nonatomic) NSDictionary restrictions;
- (BOOL)isLocked;
- (BOOL)isEncrypted;
- (id)organization;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)payloads;
- (id)displayName;
- (void)encodeWithCoder:;
- (BOOL)isManaged;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (long long)profileVersion;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)profileDescription;
- (id)restrictions;
- (id)signerCertificates;
- (id)initWithUUID:type:identifier:profileVersion:displayName:organization:profileDescription:isManaged:isLocked:hasRemovalPasscode:isEncrypted:signerCertificates:payloads:restrictions:;
- (BOOL)hasRemovalPasscode;
+ (BOOL)supportsSecureCoding;
@end
