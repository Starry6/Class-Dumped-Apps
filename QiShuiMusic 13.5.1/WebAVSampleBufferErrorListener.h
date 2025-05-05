@interface WebAVSampleBufferErrorListener : NSObject
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithParent:;
- (id).cxx_construct;
- (void)layerFailedToDecode:;
- (void)audioRendererWasAutomaticallyFlushed:;
- (void)beginObservingLayer:;
- (void)stopObservingLayer:;
- (void)beginObservingRenderer:;
- (void)stopObservingRenderer:;
@end
