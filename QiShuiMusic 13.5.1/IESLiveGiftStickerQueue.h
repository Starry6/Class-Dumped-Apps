@interface IESLiveGiftStickerQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSMutableArray stickerBuf;
@property (nonatomic) @? next;
@property (nonatomic) @? end;
@property (nonatomic) @? endOfGiftPlay;
@property (nonatomic) @? delayEndTime;
@property (nonatomic) IESLiveGiftSticker currentSticker;
@property (nonatomic) BOOL enableExpireSticker;
@property (nonatomic) double stickerDelayInterval;
- (void)endPlayIfNeeded;
- (void)getGiftQueueTaskCountWithBlock:;
- (id)currentSticker;
- (id)delayEndTime;
- (BOOL)enableExpireSticker;
- (id)endOfGiftPlay;
- (void)insertNode:into:;
- (void)insertToFront:;
- (void)loopNext;
- (void)loopNextIfNeeded:;
- (void)setCurrentSticker:;
- (void)setDelayEndTime:;
- (void)setEnableExpireSticker:;
- (void)setEndOfGiftPlay:;
- (void)setStickerBuf:;
- (void)setStickerDelayInterval:;
- (id)stickerBuf;
- (double)stickerDelayInterval;
- (id)next;
- (void)setNext:;
- (void)setEnd:;
- (id)end;
- (id)init;
- (void)dealloc;
- (void)setWorkQueue:;
- (id)workQueue;
- (void)destroy;
- (void).cxx_destruct;
- (void)insert:;
- (long long)size;
- (void)restartTimer;
@end
