@interface HARSensorDataSampler : NSObject
@property (nonatomic) BOOL predicting;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) double interval;
@property (nonatomic) NSObject<OS_dispatch_queue> sampleQueue;
@property (nonatomic) <HARSensorDataController> dataController;
- (void)setSampleQueue:;
- (void)destroyTimer;
- (BOOL)predicting;
- (id)sampleQueue;
- (void)setDataController:;
- (void)setPredicting:;
- (BOOL)stopSample;
- (id)init;
- (void)dealloc;
- (void)setTimer:;
- (void)setInterval:;
- (void).cxx_destruct;
- (id)timer;
- (double)interval;
- (id)dataController;
- (BOOL)startSample;
@end
