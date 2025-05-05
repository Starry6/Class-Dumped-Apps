@interface LSAudioBufferQueue : NSObject
- (unsigned long long)dequeueAllData:;
- (int)dequeueData:outputSize:;
- (void)enqueueData:dataSize:;
- (void)releaseBufferQueue;
- (void)resetBufferQueue;
- (unsigned long long)capacity;
- (unsigned long long)freeSpace;
- (unsigned long long)size;
+ (id)bufferQueueWithLength:;
+ (id)bufferQueue;
@end
