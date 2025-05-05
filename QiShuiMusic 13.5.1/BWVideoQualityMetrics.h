@interface BWVideoQualityMetrics : NSObject
@property (nonatomic) I qualityScoringVersion;
- (void)reset;
- (void)processMetadata:;
- (double)_computeLuxScore;
- (double)computeQualityScore;
- (unsigned int)qualityScoringVersion;
+ (id)filterMetadata:;
+ (double)_luxThreshold;
+ (double)_luxTransition;
@end
