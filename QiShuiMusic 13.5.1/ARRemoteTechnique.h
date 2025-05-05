@interface ARRemoteTechnique : ARTechnique
@property (nonatomic) BOOL active;
@property (nonatomic) ARServerConnection serverConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serviceProxy;
- (id)initWithListenerEndpoint:;
- (id)serverConnection;
- (void)dealloc;
- (id)processData:;
- (void).cxx_destruct;
- (void)setActive:;
- (id)initWithServiceName:;
- (BOOL)isActive;
- (void)prepare:;
- (void)requestResultDataAtTimestamp:context:;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (long long)captureBehavior;
- (void)serverConnectionInterrupted:;
- (void)serverConnectionInvalidated:;
- (void)techniqueDidOutputResultData:timestamp:context:;
- (void)techniqueDidFailWithError:;
- (id)initWithServerConnection:;
- (long long)numberOfActiveConnections;
@end
