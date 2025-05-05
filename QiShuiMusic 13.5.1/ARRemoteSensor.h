@interface ARRemoteSensor : NSObject
@property (nonatomic) BOOL running;
@property (nonatomic) <ARSensorDelegate> delegate;
@property (nonatomic) ARServerConnection serverConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q powerUsage;
- (id)initWithListenerEndpoint:;
- (id)serverConnection;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (void)setRunning:;
- (void)stop;
- (BOOL)isRunning;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithServiceName:;
- (unsigned long long)providedDataTypes;
- (id)initWithServerConnection:;
- (void)sensorDidFailWithError:;
- (void)sensorDidOutputSensorData:;
- (void)sensorDidPause;
- (void)sensorDidRestart;
- (void)sensorDidStart;
@end
