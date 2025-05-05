@interface MIAppReference : NSObject
@property (nonatomic) NSUUID referenceUUID;
@property (nonatomic) MIAppIdentity identity;
@property (nonatomic) Q domain;
@property (nonatomic) I uid;
- (id)identity;
- (unsigned int)uid;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)domain;
- (BOOL)isEqual:;
- (id)initWithReferenceUUID:identity:domain:uid:;
- (id)referenceUUID;
+ (BOOL)supportsSecureCoding;
+ (BOOL)validateAppReference:withError:;
@end
