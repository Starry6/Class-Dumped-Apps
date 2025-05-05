@interface AlgosScoreStreamDataCSV : AlgosScoreDataCSV
@property (nonatomic) NSDictionary methods;
@property (nonatomic) BOOL isMusic;
- (id)methods;
- (int)transformer;
- (void).cxx_destruct;
- (void)setMethods:;
- (id)setUpMethods;
- (BOOL)matchesMethod:code:;
- (BOOL)validMethod:;
- (id)initIsMusic:;
- (BOOL)isMusic;
- (void)setIsMusic:;
+ (id)streamDataCSV:;
@end
