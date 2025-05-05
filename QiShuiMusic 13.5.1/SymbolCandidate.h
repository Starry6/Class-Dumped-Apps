@interface SymbolCandidate : NSObject
@property (nonatomic) S symbol;
@property (nonatomic) double probability;
@property (nonatomic) double logProbability;
@property (nonatomic) NSString description;
- (void)setSymbol:;
- (unsigned short)symbol;
- (id)description;
- (double)probability;
- (void)setProbability:;
- (double)logProbability;
- (void)setLogProbability:;
@end
