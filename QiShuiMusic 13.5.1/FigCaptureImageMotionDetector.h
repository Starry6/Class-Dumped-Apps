@interface FigCaptureImageMotionDetector : NSObject
@property (nonatomic) {?=[2f][2i]ii{CGRect={CGPoint=dd}{CGSize=dd}}BB} motionStatistics;
@property (nonatomic) float stationaryThreshold;
@property (nonatomic) NSInteger maximumSearchRange;
- (id)init;
- (int)setCentralROIAndGetRect:;
- (void)dealloc;
- (void)setStationaryThreshold:;
- (id)initWithWidth:height:maximumSearchRange:frameRingSize:;
- (id)motionStatistics;
- (float)stationaryThreshold;
- (id)initWithWidth:height:;
- (int)processPixelBuffer:;
- (int)setRoi:actualROI:;
- (int)maximumSearchRange;
- (void)resetProcessingState;
@end
