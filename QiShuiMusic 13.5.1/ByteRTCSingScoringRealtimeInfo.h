@interface ByteRTCSingScoringRealtimeInfo : NSObject
@property (nonatomic) NSInteger currentPosition;
@property (nonatomic) NSInteger userPitch;
@property (nonatomic) NSInteger standardPitch;
@property (nonatomic) NSInteger sentenceIndex;
@property (nonatomic) NSInteger sentenceScore;
@property (nonatomic) NSInteger totalScore;
@property (nonatomic) NSInteger averageScore;
- (void)setSentenceIndex:;
- (void)setSentenceScore:;
- (void)setUserPitch:;
- (int)userPitch;
- (int)standardPitch;
- (void)setStandardPitch:;
- (int)sentenceIndex;
- (int)sentenceScore;
- (void)setTotalScore:;
- (int)currentPosition;
- (int)totalScore;
- (void)setCurrentPosition:;
- (int)averageScore;
- (void)setAverageScore:;
@end
