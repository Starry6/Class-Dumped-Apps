@interface LPLinkMetadataObserver : NSObject
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)stopObserving;
- (void).cxx_destruct;
- (id)initWithMetadata:callback:;
@end
