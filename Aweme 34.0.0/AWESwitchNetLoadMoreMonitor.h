@interface AWESwitchNetLoadMoreMonitor : NSObject
@property (nonatomic) NSTimer loadMoreTimer;
@property (nonatomic) NSTimer loadMoreForOfflineTimer;
@property (nonatomic) <AWESwitchNetLongBlockProtocol> delegate;
- (void)beginLoadMore;
- (void)endLoadMore;
- (id)loadMoreTimer;
- (void)onLoadMoreBlock;
- (void)setLoadMoreTimer:;
- (void)onLoadMoreForOfflineBlock;
- (void)setLoadMoreForOfflineTimer:;
- (id)loadMoreForOfflineTimer;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
