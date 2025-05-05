@interface FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory : NSObject
@property (nonatomic) NSInteger lastPassingIStopZEstimateDelta;
@property (nonatomic) NSInteger previousIStopZEstimateDelta;
@property (nonatomic) NSInteger currentIStopZEstimateDelta;
- (int)lastPassingIStopZEstimateDelta;
- (void)setLastPassingIStopZEstimateDelta:;
- (int)previousIStopZEstimateDelta;
- (void)setPreviousIStopZEstimateDelta:;
- (int)currentIStopZEstimateDelta;
- (void)setCurrentIStopZEstimateDelta:;
@end
