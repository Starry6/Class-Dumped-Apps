@interface CSJFreqPolicyModel : CSJBasicModel
@property (nonatomic) double duration;
@property (nonatomic) q max;
@property (nonatomic) double agg_multiple;
- (double)agg_multiple;
- (void)setAgg_multiple:;
- (BOOL)validAggPolicy;
- (void)setDuration:;
- (long long)max;
- (void)setMax:;
- (double)duration;
@end
