@interface AWEHotPointDataControllerCache : NSObject
@property (nonatomic) NSMutableDictionary dataControllerCache;
@property (nonatomic) NSMutableDictionary wordIndexCache;
@property (nonatomic) BOOL alreadyAddPreloadVideoCount;
- (void)removeAllCache;
- (id)dataControllerCache;
- (id)dataControllerForKeyword:;
- (void)cacheDataController:index:;
- (void)recoverFoldDataController;
- (long long)indexForKeyword:;
- (void)setAlreadyAddPreloadVideoCount:;
- (void)cacheDataController:;
- (id)wordIndexCache;
- (void)cacheDataController:keyword:;
- (BOOL)alreadyAddPreloadVideoCount;
- (void)setDataControllerCache:;
- (void)setWordIndexCache:;
- (id)init;
- (void).cxx_destruct;
@end
