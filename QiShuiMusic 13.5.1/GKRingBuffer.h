@interface GKRingBuffer : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithCapacity:bytesPerFrame:;
- (void)increaseCapacity:;
- (BOOL)store:numSamples:timestamp:;
- (int)needsNewNumSamples:timestamp:;
- (int)fetch:numSamples:timestamp:;
@end
