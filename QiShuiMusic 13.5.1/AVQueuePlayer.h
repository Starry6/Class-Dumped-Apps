@interface AVQueuePlayer : AVPlayer
- (id)initWithItems:;
- (void)removeItem:;
- (id)init;
- (void)dealloc;
- (id)items;
- (void)removeAllItems;
- (void)advanceToNextItem;
- (void)setActionAtItemEnd:;
- (long long)_defaultActionAtItemEnd;
- (BOOL)canInsertItem:afterItem:;
- (void)insertItem:afterItem:;
- (BOOL)canOverlapPlaybackFromPlayerItem:toPlayerItem:;
+ (id)queuePlayerWithItems:;
@end
