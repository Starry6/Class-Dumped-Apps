@interface DMFProfilePayload : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString identifier;
@property (nonatomic) q payloadVersion;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString organization;
@property (nonatomic) NSString payloadDescription;
- (id)organization;
- (id)identifier;
- (long long)payloadVersion;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)displayName;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)payloadDescription;
- (id)initWithType:identifier:payloadVersion:displayName:organization:payloadDescription:;
+ (BOOL)supportsSecureCoding;
@end
