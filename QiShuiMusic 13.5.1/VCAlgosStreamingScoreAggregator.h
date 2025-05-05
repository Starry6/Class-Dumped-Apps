@interface VCAlgosStreamingScoreAggregator : NSObject
@property (nonatomic) double score;
- (id)init;
- (void)dealloc;
- (double)score;
- (id)algosScorerWithParticipantID:;
- (void)addParticipantWithTime:participantID:;
- (double)aggregateScores;
- (double)aggregateScoresWithDictionaryLogging:time:;
@end
