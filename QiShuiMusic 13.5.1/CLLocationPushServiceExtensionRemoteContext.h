@interface CLLocationPushServiceExtensionRemoteContext : CLLocationPushServiceExtensionContext
- (id)initWithInputItems:listenerEndpoint:contextUUID:;
- (void)didReceiveLocationPushPayload:reply:;
- (void)serviceExtensionWillTerminate;
- (void)serviceExtensionPerformCleanup;
@end
