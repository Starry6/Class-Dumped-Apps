@interface PCCBridgeEndpoint : PCCEndpoint
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)runWithDelegate:;
- (BOOL)isDeviceNearby:;
- (id)synchronize:withOptions:;
- (id)send:message:error:;
- (id)send:file:metadata:error:;
- (id)deviceIds;
- (void)setupIncomingEventListener;
- (void)setupDeviceStateChangeHandler;
- (void)enterInterruptedStateFrom:;
- (void)exitInterruptedStateFrom:;
- (id)identifierForTarget:;
- (void)setupOutgoingConnection:;
- (id)connectionForIdentifier:;
- (void)stashCrashReporterKeyForIdentifier:;
+ (BOOL)isSupportedRemoteDeviceType:;
+ (id)remoteDeviceForIdentifier:;
+ (id)identifierForRemoteDevice:;
+ (id)UDIDForRemoteDevice:;
+ (void)addSenderToMessage:;
@end
