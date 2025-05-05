@interface GEOSearchAutoRedoThreshold : NSObject
@property (nonatomic) Q numberOfVisiblePoisThreshold;
@property (nonatomic) double zoomInPercentThreshold;
@property (nonatomic) double zoomOutPercentThreshold;
@property (nonatomic) double panDeltaThresholdInMeters;
- (id)init;
- (id)initWithSearchAutoRedoThreshold:;
- (unsigned long long)numberOfVisiblePoisThreshold;
- (double)zoomInPercentThreshold;
- (double)zoomOutPercentThreshold;
- (double)panDeltaThresholdInMeters;
@end
