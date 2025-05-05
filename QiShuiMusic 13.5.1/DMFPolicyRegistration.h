@interface DMFPolicyRegistration : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSSet policyTypes;
@property (nonatomic) @? callback;
- (id)callback;
- (void)setCallback:;
- (id)policyTypes;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithIdentifier:policyTypes:callback:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
