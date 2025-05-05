@interface LNActionConfigurationWhen : LNActionConfiguration
@property (nonatomic) LNActionConfigurationCondition condition;
@property (nonatomic) LNActionConfiguration when;
@property (nonatomic) LNActionConfiguration otherwise;
- (id)actionConfigurationByEvaluatingAction:;
- (id)condition;
- (id)when;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithCondition:when:otherwise:;
- (id)otherwise;
+ (BOOL)supportsSecureCoding;
@end
