@interface IESLiveStackDynamicConfig : IESLiveStackDynamicRule
@property (nonatomic) q distribution;
@property (nonatomic) q aligment;
@property (nonatomic) NSNumber spacing;
- (long long)aligment;
- (void)executeAtState:managedStack:;
- (id)initWithDistribution:aligment:spacing:;
- (void)setAligment:;
- (long long)distribution;
- (void)setDistribution:;
- (id)spacing;
- (void)setSpacing:;
- (void).cxx_destruct;
@end
