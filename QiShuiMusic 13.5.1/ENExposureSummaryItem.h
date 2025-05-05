@interface ENExposureSummaryItem : NSObject
@property (nonatomic) double maximumScore;
@property (nonatomic) double scoreSum;
@property (nonatomic) double weightedDurationSum;
- (void)encodeWithXPCObject:;
- (id)initWithXPCObject:error:;
- (id)description;
- (double)scoreSum;
- (double)maximumScore;
- (void)roundDurations;
- (double)weightedDurationSum;
- (void)setMaximumScore:;
- (void)setScoreSum:;
- (void)setWeightedDurationSum:;
@end
