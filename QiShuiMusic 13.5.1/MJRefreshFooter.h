@interface MJRefreshFooter : MJRefreshComponent
@property (nonatomic) double ignoredScrollViewContentInsetBottom;
@property (nonatomic) BOOL automaticallyHidden;
- (id)linkTo:;
- (void)resetNoMoreData;
- (void)animateEndRefreshingWithHasMore:completion:;
- (void)endRefreshingWithHasMore:;
- (void)endRefreshingWithNoMoreData;
- (double)ignoredScrollViewContentInsetBottom;
- (BOOL)isAutomaticallyHidden;
- (void)noticeNoMoreData;
- (void)setAutomaticallyHidden:;
- (void)setIgnoredScrollViewContentInsetBottom:;
- (void)prepare;
+ (id)footerWithRefreshingBlock:;
+ (id)footerWithRefreshingTarget:refreshingAction:;
@end
