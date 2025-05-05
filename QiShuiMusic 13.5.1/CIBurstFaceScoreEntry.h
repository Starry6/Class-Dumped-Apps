@interface CIBurstFaceScoreEntry : NSObject
@property (nonatomic) float maxScore;
@property (nonatomic) float minScore;
@property (nonatomic) NSInteger numScores;
- (void)addScore:;
- (id)initWithScore:;
- (float)maxScore;
- (float)computeAverage;
- (float)computeStandardDeviation;
- (void)setMaxScore:;
- (float)minScore;
- (void)setMinScore:;
- (int)numScores;
- (void)setNumScores:;
@end
