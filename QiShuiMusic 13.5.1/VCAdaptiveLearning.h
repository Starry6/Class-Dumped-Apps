@interface VCAdaptiveLearning : NSObject
@property (nonatomic) NSInteger adaptiveLearningState;
- (void)dealloc;
- (id)initWithParameters:;
- (int)learntBitrateForSegment:defaultValue:;
- (void)saveCallSegmentHistory;
- (void)updateSegment:TBR:ISBTR:SATXBR:SARBR:BWE:;
- (int)longTermAverageTBRForSegment:;
- (int)shortTermAverageTBRForSegment:;
- (int)longTermAverageISBRForSegment:;
- (int)shortTermAverageISBRForSegment:;
- (int)previousISBRForSegment:;
- (int)longTermAverageSATXBRForSegment:;
- (int)shortTermAverageSATXBRForSegment:;
- (int)longTermAverageSARBRForSegment:;
- (int)shortTermAverageSARBRForSegment:;
- (int)longTermAverageBWEForSegment:;
- (int)shortTermAverageBWEForSegment:;
- (int)adaptiveLearningState;
@end
