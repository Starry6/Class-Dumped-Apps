@interface AWESpecialCardPreloadManager : NSObject
@property (nonatomic) AWESpecialCardCachePool cachePool;
- (id)cachePool;
- (void)setCachePool:;
- (BOOL)containsPreCreateLynxSpecialCardWithModel:;
- (void)removePreCreateLynxSpecialCardWithModel:;
- (id)getPreCreateLynxSpecialCardWithModel:;
- (void)preCreateLynxSpecialCardWithModel:context:completion:;
- (void)appDidReceiveMemoryWarningNotification;
- (id)init;
- (void).cxx_destruct;
@end
