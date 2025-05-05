@interface ISURLBagCache : NSObject
- (id)init;
- (void)dealloc;
- (void)invalidateURLBagForContext:;
- (void)invalidateAllURLBags;
- (void)addURLBag:;
- (id)_newRequestWithURLBagContext:;
- (void)_storeFrontChangedNotification:;
- (void).cxx_destruct;
- (id)URLBagForContext:withOptions:;
- (id)URLBagForContext:;
+ (id)URLWithBagContext:;
+ (id)sharedCache;
@end
