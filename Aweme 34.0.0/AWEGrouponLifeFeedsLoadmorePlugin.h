@interface AWEGrouponLifeFeedsLoadmorePlugin : AWEGrouponLifeFeedsBasePlugin
@property (nonatomic) q numberOfTriggers;
@property (nonatomic) q loadingMore;
@property (nonatomic) double previousLoadmoreTime;
@property (nonatomic) double minIntervalDuration;
@property (nonatomic) BOOL paddingLoadMoreEvent;
@property (nonatomic) BOOL pageDidScroll;
- (void)loadMore;
- (void)componentStartShow:reason:;
- (void)pageDidScroll:scrollView:;
- (void)hostPageDidScroll:scrollView:hostPageScrollViewOffset:;
- (long long)loadingMore;
- (void)tryLoadMore;
- (BOOL)pageDidScroll;
- (void)setPageDidScroll:;
- (void)tryLoadMoreWhenPageFirstScroll;
- (long long)numberOfTriggers;
- (double)previousLoadmoreTime;
- (double)minIntervalDuration;
- (void)setPreviousLoadmoreTime:;
- (void)setNumberOfTriggers:;
- (void)setMinIntervalDuration:;
- (BOOL)paddingLoadMoreEvent;
- (void)setPaddingLoadMoreEvent:;
- (id)init;
@end
