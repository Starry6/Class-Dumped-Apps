@interface AFInstanceInfo : NSObject
@property (nonatomic) NSUUID instanceUUID;
@property (nonatomic) q applicationType;
@property (nonatomic) NSUUID applicationUUID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (long long)applicationType;
- (id)initWithBuilder:;
- (id)instanceUUID;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInstanceUUID:applicationType:applicationUUID:;
- (id)applicationUUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
