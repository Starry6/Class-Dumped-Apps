@interface CBFrameStats : NSObject
@property (nonatomic) double movingAverageDuration;
@property (nonatomic) float scaleFactor;
- (void)dealloc;
- (float)scaleFactor;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (void)stopMonitoring;
- (id).cxx_construct;
- (void)initialiseWindowServerDisplay;
- (void)startMonitoring:;
- (float)getMovingAverage;
- (void)enableFrameInfoLogging:;
- (void)processFrameInfo:;
- (BOOL)shouldPop;
- (float)getPeakAPCE;
- (float)getPeakAPCECap;
- (double)movingAverageDuration;
- (void)setMovingAverageDuration:;
@end
