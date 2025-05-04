@interface AWEECFeedEntranceDirector : NSObject
@property (nonatomic) BOOL isOrdered;
@property (nonatomic) AWEECFeedEntranceRequestBuilder builder;
- (id)aAWEPadSplitScreenAdapter;
- (void)setIsOrdered:;
- (void)p_trackAd;
- (void)enterOpenUrl:param:;
- (void)openWithSchema:;
- (void)openSkuPanelWithSchema:;
- (void)trackProductAnchorClick;
- (void)enterGoodsDetailPage;
- (BOOL)p_showLubanPanelWJPRequest:;
- (void)trackProductEntranceClick;
- (void)routeAnchorUrl;
- (void)preLoadInnerFeed;
- (void)enterInternalFeedFlow;
- (id)init;
- (id)builder;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isOrdered;
- (void)setBuilder:;
+ (BOOL)panelIsShowing;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (void)setPanelIsShowing:;
@end
