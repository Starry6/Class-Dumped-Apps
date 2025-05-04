@interface AWEFeedLoadMoreOptController : AWEBaseController
@property (nonatomic) {CGPoint=dd} oldOffset;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) double startStallingTimeStamp;
@property (nonatomic) double stopStallingTimeStamp;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (void)setStartStallingTimeStamp:;
- (BOOL)shouldScrollToNextVideo;
- (id)oldOffset;
- (void)setOldOffset:;
- (void)setStopStallingTimeStamp:;
- (double)stopStallingTimeStamp;
- (double)startStallingTimeStamp;
- (BOOL)isLoading;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)scrollViewDidScroll:;
- (void)setIsLoading:;
@end
