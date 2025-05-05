@interface ActivityKit.ActivityPresentationObservationClient : NSObject
- (id)init;
- (id)listenForActivityPresentationWithActivityIdentifier:presenterBundleIdentifier:handler:;
@end
