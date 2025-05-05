@interface NEAppPushCallKitXPCClient : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)voipNetworkExtensionPayloadReceived:mustPostCall:withCompletionHandler:;
- (void)voipNetworkExtensionRegistrationFailed;
@end
