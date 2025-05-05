@interface ByteRTCSingScoringManager : NSObject
- (id)initWithSingScoringManager:;
- (int)initSingScoring:singScoringToken:delegate:;
- (int)setSingScoringConfig:;
- (id)getStandardPitchInfo:;
- (int)startSingScoring:scoringInfoInterval:;
- (int)stopSingScoring;
- (int)getLastSentenceScore;
- (int)getTotalScore;
- (int)getAverageScore;
- (void)dealloc;
@end
