@interface TITraceLogCandidateWordSource : NSObject
@property (nonatomic) NSString wordSource;
@property (nonatomic) double probability;
@property (nonatomic) double linguisticContextProbability;
- (void).cxx_destruct;
- (id)initWithWordSource:probability:linguisticContextProbability:;
- (id)wordSource;
- (void)setWordSource:;
- (double)probability;
- (void)setProbability:;
- (double)linguisticContextProbability;
- (void)setLinguisticContextProbability:;
@end
