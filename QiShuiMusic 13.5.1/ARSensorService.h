@interface ARSensorService : ARDaemonService
@property (nonatomic) <ARRemoteSensorClient> clientProxy;
@property (nonatomic) <ARSensor> sensor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)start;
- (void)stop;
- (id)sensor;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (void)sensor:didOutputSensorData:;
- (void)providedDataTypesWithReply:;
- (void)sensor:didFailWithError:;
- (void)sensorDidStart:;
- (void)sensorDidPause:;
- (void)sensorDidRestart:;
- (id)clientProxy;
- (void)setClientProxy:;
- (void)setSensor:;
@end
