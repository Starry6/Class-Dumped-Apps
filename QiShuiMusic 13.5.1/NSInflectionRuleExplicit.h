@interface NSInflectionRuleExplicit : NSInflectionRule
@property (nonatomic) NSMorphology morphology;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithMorphology:;
- (id)morphology;
+ (BOOL)supportsSecureCoding;
@end
