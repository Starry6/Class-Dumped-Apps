@interface STLive.LiveScrollRefreshServiceImp : NSObject
- (void)scrollView:setFooterTitleColor:;
- (void)beginHeaderRefreshingForScrollView:;
- (void)endHeaderRefreshingForScrollView:;
- (void)endRefreshingForScrollView:;
- (void)scrollView:setFooterTitle:;
- (void)scrollView:setFooterTitle:forState:;
- (void)scrollView:setFooterTitleFont:;
- (id)scrollView:setFooterWithRefreshingBlock:;
- (id)scrollView:setHeaderWithRefreshingBlock:;
- (void)scrollView:setLiveRoomrHeaderWithRefreshingStateBlock:;
- (id)init;
@end
