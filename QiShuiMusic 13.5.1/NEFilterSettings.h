@interface NEFilterSettings : NSObject
@property (nonatomic) NSArray rules;
@property (nonatomic) q defaultAction;
- (BOOL)checkValidityAndCollectErrors:;
- (id)descriptionWithIndent:options:;
- (long long)defaultAction;
- (id)rules;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithRules:defaultAction:;
+ (BOOL)supportsSecureCoding;
@end
