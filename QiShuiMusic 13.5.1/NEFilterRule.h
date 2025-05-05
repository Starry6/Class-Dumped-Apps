@interface NEFilterRule : NSObject
@property (nonatomic) NENetworkRule networkRule;
@property (nonatomic) q action;
- (BOOL)checkValidityAndCollectErrors:;
- (id)descriptionWithIndent:options:;
- (long long)action;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithNetworkRule:action:;
- (id)networkRule;
+ (BOOL)supportsSecureCoding;
@end
