@interface ABUAdHistory : NSObject
@property (nonatomic) q ruleId;
- (BOOL)canUse;
- (id)infoForHistory;
- (void)updateHistory;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (id)initWithRule:;
- (void)setRuleId:;
- (long long)ruleId;
+ (BOOL)supportsSecureCoding;
@end
