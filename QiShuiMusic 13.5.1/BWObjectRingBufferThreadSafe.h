@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer
- (id)firstObject;
- (void)setCapacity:;
- (void)dealloc;
- (void)clear;
- (id)description;
- (id)lastObject;
- (id)lastTime;
- (id)initWithCapacity:;
- (void)appendObject:forTime:;
- (id)firstTime;
- (void)enumerateObjectsStartingAt:usingBlock:;
- (void)reverseEnumerateObjectsStartingAt:usingBlock:;
- (void)extractTimeRangeFrom:until:into:times:;
- (void)flushEntriesEarlierThan:;
@end
