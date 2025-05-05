@interface ABUAdRule : NSObject
@property (nonatomic) q ruleId;
@property (nonatomic) NSString mediaRuleId;
- (void)setMediaRuleId:;
- (BOOL)canUse;
- (id)mediaRuleId;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setRuleId:;
- (long long)ruleId;
+ (BOOL)supportsSecureCoding;
@end
