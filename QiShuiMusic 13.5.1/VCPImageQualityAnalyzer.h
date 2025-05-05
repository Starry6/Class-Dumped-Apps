@interface VCPImageQualityAnalyzer : NSObject
@property (nonatomic) float qualityScore;
- (float)qualityScore;
- (int)analyzeImageQuality:irisPhotoOffsetSec:cancel:;
@end
