@interface CAPresentationModifierGroup : NSObject
@property (nonatomic) Q capacity;
@property (nonatomic) Q count;
@property (nonatomic) BOOL updatesAsynchronously;
- (unsigned long long)capacity;
- (unsigned long long)nextSlotWithPayloadSize:;
- (void)dealloc;
- (void)setUpdatesAsynchronously:;
- (void)flush;
- (void)resetBitMask;
- (id)_renderShmem;
- (void)_setLocalContextId:;
- (void)flushWithTransaction;
- (void)flushLocally;
- (unsigned long long)count;
- (BOOL)updatesAsynchronously;
- (void)markWritten:;
- (id)shmem;
- (id)initWithCapacity:;
+ (id)groupWithCapacity:;
@end
