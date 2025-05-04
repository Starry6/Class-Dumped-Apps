@interface AWEPlayableWebViewPreloadManager : NSObject
@property (nonatomic) NSMutableDictionary webInstances;
@property (nonatomic) YYMemoryCache URLs;
- (BOOL)enablePlayableContainerPreRenderWithModel:;
- (BOOL)isURLPreRendered:model:;
- (id)fetchPreRenderedPlayableContainerViewControllerWithRequestURL:model:;
- (void)preRenderIfNeededWithURLString:title:model:;
- (BOOL)removePreRenderIfNeededWithURLString:model:;
- (void)removeAllPrerenderedPlayableContainerControllers;
- (void)setWebInstances:;
- (id)cacheKeyWithAweme:urlString:;
- (id)webInstances;
- (void)updateWithModelIfNeeded:URLString:;
- (void)removePrerenderLeastRecentlyWebViewController;
- (void)removePrerenderWebViewControllerWithCacheKey:;
- (id)initWithCountLimit:;
- (void)dealloc;
- (void)setURLs:;
- (id)URLs;
- (void).cxx_destruct;
@end
