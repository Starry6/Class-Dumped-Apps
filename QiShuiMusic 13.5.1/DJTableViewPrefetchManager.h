@interface DJTableViewPrefetchManager : NSObject
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) NSArray lastestPrefetchedindexPaths;
@property (nonatomic) double prefetchRectSizeRatio;
@property (nonatomic) double updateSizeRatio;
@property (nonatomic) {CGPoint=dd} lastPrefetchedOffset;
@property (nonatomic) @? prefetchCompletion;
@property (nonatomic) BOOL bPrefetchEnabled;
- (void)setLastestPrefetchedindexPaths:;
- (id)PrefetchRectWithIsScrollingForward:sizeRatio:;
- (double)updateSizeRatio;
- (BOOL)bPrefetchEnabled;
- (void)checkPrefetching;
- (double)distanceBetweenPoint:andPoint:;
- (id)indexPathsInRect:;
- (BOOL)isScrollingForwardlastPrefetchedOffset:;
- (id)lastPrefetchedOffset;
- (id)lastestPrefetchedindexPaths;
- (BOOL)needCheckContentChangedForPrefetching;
- (id)prefetchCompletion;
- (double)prefetchRectSizeRatio;
- (void)setBPrefetchEnabled:;
- (void)setLastPrefetchedOffset:;
- (void)setPrefetchCompletion:;
- (void)setPrefetchEnabled:;
- (void)setPrefetchRectSizeRatio:;
- (void)setUpdateSizeRatio:;
- (void)updateIndexPaths:;
- (void)setScrollView:;
- (id)init;
- (void)dealloc;
- (id)initWithScrollView:;
- (long long)scrollDirection;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)scrollView;
- (void).cxx_destruct;
- (id)indexPathsForVisibleRows;
@end
