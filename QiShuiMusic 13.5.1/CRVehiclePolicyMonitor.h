@interface CRVehiclePolicyMonitor : NSObject
@property (nonatomic) NSData vehicleCertificateSerial;
@property (nonatomic) NSXPCConnection serviceConnection;
@property (nonatomic) BOOL monitoring;
@property (nonatomic) <CRVehiclePolicyMonitoring> delegate;
- (id)serviceConnection;
- (void)dealloc;
- (void)setMonitoring:;
- (void)setDelegate:;
- (BOOL)isMonitoring;
- (void)startMonitoring;
- (id)delegate;
- (void)setServiceConnection:;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)willEnableCertificateSerial:reply:;
- (void)willDisableCertificateSerial:reply:;
- (id)initWithVehicleCertificateSerial:;
- (id)monitoringConnection;
- (id)vehicleCertificateSerial;
- (void)setVehicleCertificateSerial:;
@end
