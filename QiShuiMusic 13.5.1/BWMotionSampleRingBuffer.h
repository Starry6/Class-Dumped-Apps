@interface BWMotionSampleRingBuffer : NSObject
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
@end
