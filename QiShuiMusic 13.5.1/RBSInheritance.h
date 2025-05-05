@interface RBSInheritance : NSObject
@property (nonatomic) RBSAssertionIdentifier originatingIdentifier;
@property (nonatomic) NSObject<OS_xpc_object> encodedEndowment;
@property (nonatomic) NSString endowmentNamespace;
@property (nonatomic) NSString environment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)endowment;
- (unsigned long long)hash;
- (id)environment;
- (id)endowmentNamespace;
- (void).cxx_destruct;
- (id)originatingIdentifier;
- (id)description;
- (id)_initWithNamespace:environment:encodedEndowment:originatingIdentifier:attributePath:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)encodedEndowment;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
