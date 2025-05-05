@interface VCStreamInputVideo : VCStreamInput
- (void)dealloc;
- (void)invalidate;
- (id)initWithStreamInputID:format:delegate:delegateQueue:remoteQueue:;
- (unsigned int)addSink:;
- (unsigned int)removeSink:;
@end
