@interface AWEPerfEvaluateScoreInfo : NSObject
@property (nonatomic) float instanceScore;
@property (nonatomic) float recentScore;
@property (nonatomic) float stableScore;
- (id)initWithInstanceScore:recentScore:stableScore:;
- (float)instanceScore;
- (void)setInstanceScore:;
- (float)recentScore;
- (void)setRecentScore:;
- (float)stableScore;
- (void)setStableScore:;
@end
