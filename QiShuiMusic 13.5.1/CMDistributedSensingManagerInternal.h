@interface CMDistributedSensingManagerInternal : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_teardown;
- (void)_handleDaemonMessage:data:;
- (void)_registerForVehicleStateUpdates;
- (void)_unregisterForVehicleStateUpdates;
@end
