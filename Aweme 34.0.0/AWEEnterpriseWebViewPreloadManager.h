@interface AWEEnterpriseWebViewPreloadManager : NSObject
@property (nonatomic) NSMutableArray urls;
@property (nonatomic) YYMemoryCache preRenderViewCache;
- (void)preRenderWithURLString:scene:;
- (id)fetchPreRenderWebViewControllerWithURL:;
- (BOOL)removePreRenderWithURLString:;
- (BOOL)releasePreRenderWithURLString:;
- (BOOL)isURLPreRendered:;
- (id)p_renderedViewControllerWithURLString:;
- (id)preRenderViewCache;
- (void)releaseLeastRecentlyUsedPreRender;
- (id)p_finalPreRenderURLString:scene:;
- (id)p_preRenderWebViewWithURLString:scene:;
- (void)setPreRenderViewCache:;
- (id)init;
- (void)setUrls:;
- (void).cxx_destruct;
- (id)urls;
+ (id)sharedInstance;
@end
