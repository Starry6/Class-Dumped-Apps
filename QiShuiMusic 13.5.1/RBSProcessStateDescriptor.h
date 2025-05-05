@interface RBSProcessStateDescriptor : NSObject
@property (nonatomic) Q values;
@property (nonatomic) NSArray endowmentNamespaces;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)filterState:;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)values;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)endowmentNamespaces;
- (void)setValues:;
- (BOOL)isEqual:;
- (void)setEndowmentNamespaces:;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)descriptor;
@end
