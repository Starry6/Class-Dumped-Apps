@interface AVExternalPlaybackController : NSObject
- (void).cxx_destruct;
- (void)willBeginPlaybackWithCompletionHandler:;
- (void)willBeginPlaybackFromAppWithBundleID:completionHandler:;
- (void)_invokeClientCompletionHandlerWithPlaybackState:;
+ (id)externalPlaybackStateDescriptionForState:;
@end
