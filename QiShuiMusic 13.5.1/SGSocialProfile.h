@interface SGSocialProfile : SGLabeledObject
@property (nonatomic) NSString username;
@property (nonatomic) NSString userIdentifier;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString service;
@property (nonatomic) NSString teamIdentifier;
- (id)username;
- (id)bundleIdentifier;
- (id)teamIdentifier;
- (id)userIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)service;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithUsername:userIdentifier:bundleIdentifier:displayName:service:teamIdentifier:label:extractionInfo:recordId:;
- (BOOL)isEqualToSGSocialProfile:;
+ (BOOL)supportsSecureCoding;
@end
