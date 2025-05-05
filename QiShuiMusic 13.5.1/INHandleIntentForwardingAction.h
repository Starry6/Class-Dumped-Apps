@interface INHandleIntentForwardingAction : INIntentForwardingAction
- (BOOL)executeRemotelyWithVendorRemote:completionHandler:;
- (id)_completionHandlerWithActionCompletionHandler:;
- (void)executeLocallyWithIntentDeliverer:completionHandler:;
+ (Class)responseClass;
@end
