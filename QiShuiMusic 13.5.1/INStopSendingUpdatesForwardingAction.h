@interface INStopSendingUpdatesForwardingAction : INIntentForwardingAction
- (BOOL)executeRemotelyWithVendorRemote:completionHandler:;
- (void)executeLocallyWithIntentDeliverer:completionHandler:;
+ (Class)responseClass;
@end
