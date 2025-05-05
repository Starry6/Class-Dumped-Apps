@interface DMPluginParameters : NSObject
@property (nonatomic) NSDictionary dispositionSupersetOfContext;
@property (nonatomic) NSString backupDeviceUUID;
- (void).cxx_destruct;
- (id)backupDeviceUUID;
- (BOOL)isEqual:;
- (id)initWithDispositionSupersetOfContext:backupDeviceUUID:;
- (id)dispositionSupersetOfContext;
- (void)setDispositionSupersetOfContext:;
- (void)setBackupDeviceUUID:;
+ (id)backupDeviceUUIDFromDispositionSupersetOfContext:;
@end
