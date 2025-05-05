@interface LNActionConfiguration : NSObject
- (id)actionConfigurationByEvaluatingAction:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
