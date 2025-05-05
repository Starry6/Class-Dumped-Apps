@interface TITypologyStatisticTypingSpeed : TITypologyStatisticComposite
@property (nonatomic) TITypologyStatisticTimeElapsed timeElapsed;
@property (nonatomic) TITypologyStatisticBasicCounts basicCounts;
@property (nonatomic) float typingSpeed;
- (id)timeElapsed;
- (id)initWithTimeElapsed:basicCounts:;
- (float)typingSpeed;
- (id)aggregateReport;
- (void).cxx_destruct;
- (id)basicCounts;
+ (id)statisticCompositeWithStatistics:;
+ (id)statistic;
@end
