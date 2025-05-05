@interface CIBurstClusterDivider : NSObject
@property (nonatomic) float dividerScore;
@property (nonatomic) NSInteger trueLocalMaximum;
@property (nonatomic) NSInteger leftImage;
@property (nonatomic) float actionAmount;
@property (nonatomic) float noiseThreshold;
@property (nonatomic) float highNoiseThreshold;
- (long long)compareDividers:;
- (long long)compareIndices:;
- (long long)compareActionAmounts:;
- (float)dividerScore;
- (void)setDividerScore:;
- (int)leftImage;
- (void)setLeftImage:;
- (int)trueLocalMaximum;
- (void)setTrueLocalMaximum:;
- (float)actionAmount;
- (void)setActionAmount:;
- (float)noiseThreshold;
- (void)setNoiseThreshold:;
- (float)highNoiseThreshold;
- (void)setHighNoiseThreshold:;
@end
