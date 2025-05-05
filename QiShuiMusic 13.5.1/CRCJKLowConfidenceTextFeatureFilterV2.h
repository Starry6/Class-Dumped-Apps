@interface CRCJKLowConfidenceTextFeatureFilterV2 : NSObject
@property (nonatomic) double lowConfidenceThreshold1CharLines;
@property (nonatomic) double lowConfidenceThreshold2PlusCharLines;
@property (nonatomic) double lowConfidenceThresholdIsolated1CharLines;
- (BOOL)shouldFilterFeature:;
- (BOOL)shouldFilterFeatureBasedOnGeometry:;
- (id)initWithLowConfidenceThresholdFor1CharLines:for2PlusCharLines:forIsolated1CharLines:;
- (double)lowConfidenceThreshold1CharLines;
- (double)lowConfidenceThreshold2PlusCharLines;
- (double)lowConfidenceThresholdIsolated1CharLines;
@end
