@interface CPMLNaiveBayesStorageManager : CPMLStorageManager
- (double)getCountAndSetYCardinality:;
- (double)getCountY:;
- (double)getCountXGivenYAndSetXCardinality:withX:withY:withCardinalityX:;
- (void)setCountY:;
- (void)setCountY:withCount:;
- (void)setCountXGivenY:withX:withY:withValue:;
- (void)setCardinalityXGivenY:withY:cardinalityValue:;
@end
