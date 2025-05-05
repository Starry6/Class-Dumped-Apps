@interface MXCoreSessionSidekick : MXCoreSessionBase
@property (nonatomic) NSString remoteDeviceID;
- (int)_setPropertyForKey:value:;
- (void)dealloc;
- (void)setRemoteDeviceID:;
- (int)_copyPropertyForKey:valueOut:;
- (id)remoteDeviceID;
- (int)_activate;
- (int)setPropertyForKey:value:;
- (int)copyPropertyForKey:valueOut:;
- (int)activate;
- (id)initWithRemoteDeviceID:;
- (int)deactivate:postInterruptionNotification:;
- (id)_initWithRemoteDeviceID:;
- (int)_deactivate:postInterruptionNotification:;
- (BOOL)isCategoryValid:;
- (BOOL)isModeValidForCategory:;
@end
