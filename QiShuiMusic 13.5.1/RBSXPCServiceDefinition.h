@interface RBSXPCServiceDefinition : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q variant;
@property (nonatomic) q scope;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRBSXPCCoder:;
- (long long)scope;
- (void)encodeWithRBSXPCCoder:;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (long long)variant;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
+ (id)definitionWithIdentifier:variant:scope:;
@end
