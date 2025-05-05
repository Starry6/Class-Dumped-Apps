@interface TSFrequencyAnalysis : NSObject
@property (nonatomic) double averagePeriod;
@property (nonatomic) double averageFrequency;
@property (nonatomic) double averageTimeError;
@property (nonatomic) double lowestFrequency;
@property (nonatomic) double highestFrequency;
- (id)initWithTimeErrorValues:;
- (double)averagePeriod;
- (void)setAveragePeriod:;
- (double)averageFrequency;
- (void)setAverageFrequency:;
- (double)averageTimeError;
- (void)setAverageTimeError:;
- (double)lowestFrequency;
- (void)setLowestFrequency:;
- (double)highestFrequency;
- (void)setHighestFrequency:;
@end
