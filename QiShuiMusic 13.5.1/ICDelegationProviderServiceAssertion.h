@interface ICDelegationProviderServiceAssertion : NSObject
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString name;
@property (nonatomic) NSUUID uniqueIdentifier;
- (id)uniqueIdentifier;
- (void)setExpirationDate:;
- (id)initWithName:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
