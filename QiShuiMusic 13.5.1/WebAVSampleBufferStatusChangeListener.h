@interface WebAVSampleBufferStatusChangeListener : NSObject
- (void)dealloc;
- (void)stop;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)begin;
- (void)invalidate;
- (id)initWithParent:;
- (id).cxx_construct;
@end
