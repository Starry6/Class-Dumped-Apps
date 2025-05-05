@interface LNEntity : NSObject
@property (nonatomic) NSString managedAccountIdentifier;
@property (nonatomic) BOOL transient;
@property (nonatomic) LNEntityIdentifier identifier;
@property (nonatomic) NSArray properties;
- (id)initWithIdentifier:properties:;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)properties;
- (void).cxx_destruct;
- (BOOL)isTransient;
- (id)description;
- (id)initWithIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)managedAccountIdentifier;
- (id)initWithTransient:identifier:properties:managedAccountIdentifier:;
- (id)initWithIdentifier:managedAccountIdentifier:;
- (id)initWithIdentifier:properties:managedAccountIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
