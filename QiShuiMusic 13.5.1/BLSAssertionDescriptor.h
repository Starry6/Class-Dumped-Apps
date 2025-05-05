@interface BLSAssertionDescriptor : NSObject
@property (nonatomic) NSString explanation;
@property (nonatomic) NSArray attributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)explanation;
- (void)encodeWithXPCDictionary:;
- (id)attributesOfClasses:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)attributes;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)initWithExplanation:attributes:;
- (BOOL)checkEntitlementSourceForRequiredEntitlements:error:;
- (void).cxx_destruct;
- (id)attributeOfClass:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
