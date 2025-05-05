@interface NWPVarValueItem : NSObject
@property (nonatomic) Q armPullCount;
@property (nonatomic) Q armObservedCount;
@property (nonatomic) double sampleRewardMean;
@property (nonatomic) double sampleRewardSum;
@property (nonatomic) double sampleRewardSumSquares;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned long long)armPullCount;
- (void)setArmPullCount:;
- (unsigned long long)armObservedCount;
- (void)setArmObservedCount:;
- (double)sampleRewardMean;
- (void)setSampleRewardMean:;
- (double)sampleRewardSum;
- (void)setSampleRewardSum:;
- (double)sampleRewardSumSquares;
- (void)setSampleRewardSumSquares:;
+ (BOOL)supportsSecureCoding;
@end
