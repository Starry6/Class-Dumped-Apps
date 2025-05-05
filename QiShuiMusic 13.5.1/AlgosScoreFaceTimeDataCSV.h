@interface AlgosScoreFaceTimeDataCSV : AlgosScoreDataCSV
@property (nonatomic) NSDictionary methods;
- (id)methods;
- (id)init;
- (int)transformer;
- (void).cxx_destruct;
- (void)setMethods:;
- (id)setUpMethods;
- (BOOL)matchesMethod:code:;
- (BOOL)validMethod:;
+ (id)facetimeDataCSV;
@end
