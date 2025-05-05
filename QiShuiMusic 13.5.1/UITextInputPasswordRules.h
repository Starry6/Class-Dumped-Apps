@interface UITextInputPasswordRules : NSObject
@property (nonatomic) NSString passwordRulesDescriptor;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initPasswordRulesWithDescriptor:;
- (id)passwordRulesDescriptor;
+ (BOOL)supportsSecureCoding;
+ (id)passwordRulesWithDescriptor:;
@end
