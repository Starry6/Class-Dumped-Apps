@interface ICLocalStoreAccountProperties : NSObject
@property (nonatomic) NSDictionary propertyListRepresentation;
@property (nonatomic) NSString storefrontIdentifier;
- (id)propertyListRepresentation;
- (void)_copyLocalStoreAccountPropertiesToOtherInstance:withZone:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithPropertyListRepresentation:;
- (void).cxx_destruct;
- (id)storefrontIdentifier;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
