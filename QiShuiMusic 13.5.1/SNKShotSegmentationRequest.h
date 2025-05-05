@interface SNKShotSegmentationRequest : NSObject
@property (nonatomic) NSArray fileURLs;
@property (nonatomic) float backgroundEnergyPercentile;
@property (nonatomic) float foregroundEnergyPercentile;
@property (nonatomic) {?=qiIq} hangoverDuration;
@property (nonatomic) {?=qiIq} minSegmentDuration;
@property (nonatomic) float similarityThreshold;
- (id)init;
- (id)fileURLs;
- (void)setFileURLs:;
- (float)backgroundEnergyPercentile;
- (void)setBackgroundEnergyPercentile:;
- (float)foregroundEnergyPercentile;
- (void)setForegroundEnergyPercentile:;
- (id)hangoverDuration;
- (void)setHangoverDuration:;
- (id)minSegmentDuration;
- (void)setMinSegmentDuration:;
- (float)similarityThreshold;
- (void)setSimilarityThreshold:;
@end
