@interface ABUBehaviorPerformRule : ABUBehaviorRule
@property (nonatomic) NSDictionary performExcs;
- (void)setPerformExcs:;
- (id)performExcs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
