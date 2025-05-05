@interface AFInstanceContextHost : AFInstanceContext
- (BOOL)isDefault;
- (id)mediaRouteIdentifier;
- (id)init;
- (BOOL)supportsTelephony;
- (BOOL)isCurrent;
- (id)preferencesSubdomain;
- (id)createXPCConnectionWithMachServiceName:options:;
- (id)audioDeviceIdentifier;
- (BOOL)supportsAudioPowerUpdate;
- (void).cxx_destruct;
- (id)createXPCListenerForMachService:targetQueue:flags:;
- (id)description;
- (id)info;
- (id)createXPCConnectionForMachService:targetQueue:flags:;
- (BOOL)supportsProxyGroupPlayer;
- (id)createXPCListenerWithMachServiceName:;
+ (id)effectiveMachServiceName:;
@end
