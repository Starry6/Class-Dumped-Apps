@interface LNActionConfigurationSwitch : LNActionConfiguration
@property (nonatomic) NSString parameterIdentifier;
@property (nonatomic) NSArray cases;
- (id)actionConfigurationByEvaluatingAction:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)cases;
- (id)initWithParameterIdentifier:cases:;
- (id)parameterIdentifier;
+ (BOOL)supportsSecureCoding;
@end
