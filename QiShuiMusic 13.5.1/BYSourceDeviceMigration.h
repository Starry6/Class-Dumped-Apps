@interface BYSourceDeviceMigration : BYDeviceMigrationManager
- (void)startDeviceTransferTask;
- (void)cancelDeviceTransferTask;
- (BOOL)requiresProcessAssertion;
- (void)updateFileTransferSession:;
- (id)sourceDeviceTransferTask;
+ (id)createDeviceTransferTask:;
@end
