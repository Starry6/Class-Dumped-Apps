@interface AXSupportDefaultsObserver : NSObject
- (void)startObservingPreference:andPerformBlock:;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)startObservingPreference:andBroadcastDarwinNotification:;
- (void).cxx_destruct;
@end
