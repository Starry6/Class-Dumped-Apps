@interface CRConfidenceThresholds : NSObject
@property (nonatomic) float mediumConfidenceThreshold;
@property (nonatomic) float highConfidenceThreshold;
- (id)initWithMediumThreshold:highThreshold:;
- (float)mediumConfidenceThreshold;
- (float)highConfidenceThreshold;
+ (id)defaultConfidenceThresholds;
@end
