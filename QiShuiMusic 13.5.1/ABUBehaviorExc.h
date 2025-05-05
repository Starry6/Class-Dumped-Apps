@interface ABUBehaviorExc : NSObject
@property (nonatomic) Q condition;
@property (nonatomic) ABUBehaviorFeatureRule feature;
@property (nonatomic) ABUBehaviorPerformRule perform;
@property (nonatomic) NSSet adnNames;
- (id)adnNames;
- (void)setAdnNames:;
- (void)setPerform:;
- (unsigned long long)condition;
- (void)setFeature:;
- (id)feature;
- (void)setCondition:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)perform;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
