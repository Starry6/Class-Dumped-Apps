@interface TTVideoEnginePreloadQueue : NSObject
@property (nonatomic) q maxCount;
@property (nonatomic) q count;
- (BOOL)_enoughItems;
- (BOOL)containItem:;
- (BOOL)containItemForKey:;
- (id)customCopyAllItems;
- (BOOL)enqueueItem:;
- (id)frontItem;
- (id)itemsForKey:;
- (void)popAllItems;
- (id)popBackItem;
- (id)popFrontItem;
- (void)popItem:;
- (id)popItemForKey:;
- (id)init;
- (void)dealloc;
- (long long)maxCount;
- (void)setMaxCount:;
- (id)itemForKey:;
- (void).cxx_destruct;
- (id)backItem;
- (long long)count;
@end
