@interface MPModelGenericObjectKind : MPModelKind
@property (nonatomic) NSDictionary relationshipKinds;
- (id)relationshipKinds;
- (id)humanDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)kindWithRelationshipKinds:;
+ (id)identityKind;
@end
