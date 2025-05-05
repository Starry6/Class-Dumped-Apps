@interface ABUBehaviorFeatureRule : ABUBehaviorRule
@property (nonatomic) NSDictionary featureExcs;
- (void)setFeatureExcs:;
- (id)featureExcs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
