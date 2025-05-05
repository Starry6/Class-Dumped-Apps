@interface HARLoopPredictStrategy : NSObject
@property (nonatomic) HARSensorDataSampler sensorDataSampler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSensorDataSampler:;
- (void)onSensorDataReady;
- (BOOL)predicting;
- (id)sensorDataSampler;
- (void)setSensorDataSampler:;
- (void)startPredict;
- (void)stopPredict;
- (void)dealloc;
- (void).cxx_destruct;
@end
