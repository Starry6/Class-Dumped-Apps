@interface VCStreamInputAudio : VCStreamInput
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithStreamInputID:format:delegate:delegateQueue:remoteQueue:;
- (void)registerSampleBufferCallback:context:;
@end
