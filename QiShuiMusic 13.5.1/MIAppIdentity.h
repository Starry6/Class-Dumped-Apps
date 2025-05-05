@interface MIAppIdentity : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString personaUniqueString;
- (id)personaUniqueString;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithBundleID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setPersonaUniqueString:;
- (id)bundleID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setBundleID:;
- (id)initWithBundleID:persona:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)validateAppIdentity:withError:;
@end
