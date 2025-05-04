@interface AWELiveScrollRefreshServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollView:setFooterTitle:forState:;
- (void)scrollView:setInnerFeedHeaderWithRefreshingBlock:;
- (void)scrollView:setInnerFeedFooterWithRefreshingBlock:style:;
- (void)scrollView:setInnerFeedFooterTitle:forState:;
- (void)startInnerFeedFooterRefreshWithScrollView:;
- (void)endInnerFeedFooterRefreshWithScrollView:;
- (BOOL)isInnerFeedFooterDisplayRefreshing:;
- (void)endInnerFeedFooterDisplayRefreshing:;
- (void)hiddenHeaderRefreshForScrollView:;
- (void)showHeaderRefreshForScrollView:;
- (id)scrollView:setHeaderWithRefreshingBlock:;
- (id)scrollView:setFooterWithRefreshingBlock:;
- (void)scrollView:setFooterTitle:;
- (void)scrollView:setFooterTitleFont:;
- (void)scrollView:setFooterTitleColor:;
- (void)beginHeaderRefreshingForScrollView:;
- (void)endHeaderRefreshingForScrollView:;
- (void)endRefreshingForScrollView:;
- (void)scrollView:setLiveRoomHeaderWithRefreshingBlock:;
- (void)scrollView:setLiveRoomrHeaderWithRefreshingStateBlock:;
+ (long long)getMJRefreshState:;
+ (long long)getScrollRefreshState:;
@end
