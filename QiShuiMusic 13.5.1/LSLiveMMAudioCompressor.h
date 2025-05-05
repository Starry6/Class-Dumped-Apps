@interface LSLiveMMAudioCompressor : NSObject
- (void)initCompressor;
- (id)initWithSample:channels:withFormat:;
- (void)processAudio:output:samples:;
- (BOOL)processBufferList:;
- (void)updateFormat:;
- (void)dealloc;
- (void).cxx_destruct;
@end
