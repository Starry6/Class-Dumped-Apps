@interface CNExternalUUIDContactPredicate : CNPredicate
@property (nonatomic) NSArray externalUUIDs;
- (id)shortDebugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithExternalUUIDs:;
- (id)externalUUIDs;
+ (BOOL)supportsSecureCoding;
@end
