@interface TRIVersionedNamespace : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) I compatibilityVersion;
- (id)init;
- (unsigned int)compatibilityVersion;
- (id)copyWithReplacementCompatibilityVersion:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithName:compatibilityVersion:;
- (BOOL)isEqualToVersionedNamespace:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)copyWithReplacementName:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)versionedNamespaceWithName:compatibilityVersion:;
@end
