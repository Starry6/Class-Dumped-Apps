@interface RBSAssertionDescriptor : NSObject
@property (nonatomic) RBSAssertionIdentifier identifier;
@property (nonatomic) RBSTarget target;
@property (nonatomic) NSString explanation;
@property (nonatomic) NSArray attributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)explanation;
- (id)init;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)identifier;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)attributes;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)description;
- (id)copyWithIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)descriptorWithIdentifier:target:explanation:attributes:;
@end
