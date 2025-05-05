@interface WKWebInspectorPreferenceObserver : NSObject
- (id)init;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)sharedInstance;
@end
