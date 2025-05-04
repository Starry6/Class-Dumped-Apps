@interface AWESearchCachalotViewConfig : NSObject
@property (nonatomic) NSArray pipelines;
@property (nonatomic) <CachalotRenderPipeline> fullPagePipeline;
@property (nonatomic) MJRefreshHeader headerView;
@property (nonatomic) MJRefreshFooter footerView;
@property (nonatomic) double loadMoreMargin;
@property (nonatomic) Q pageType;
- (void)setLoadMoreMargin:;
- (void)setFullPagePipeline:;
- (id)fullPagePipeline;
- (double)loadMoreMargin;
- (id)pipelines;
- (void)setFooterView:;
- (id)footerView;
- (void)setPageType:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setPipelines:;
- (void)setHeaderView:;
- (unsigned long long)pageType;
@end
