@interface VCMomentsHistoryBuffer : NSObject
- (void)dealloc;
- (void)flushBuffer;
- (id)delegate;
- (id)initWithDelegate:bufferLength:dispatchQueue:;
- (void)updateBufferWithSample:timestamp:;
- (id)getClosestSampleForTimestamp:;
- (int)getCount;
- (void)dequeueOneFrame;
- (void)enqueueWithSample:timestamp:;
- (unsigned int)getUpdatedTimestampWithTimestamp:;
@end
