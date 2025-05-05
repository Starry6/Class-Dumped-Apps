@interface QLCacheItem : NSObject
@property (nonatomic) QLItem item;
- (id)item;
- (void)addCompletionHandler:;
- (void)setItem:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_performHandlers;
@end
