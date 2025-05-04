@interface AWEFeedPadPlayController : AWEBaseController
@property (nonatomic) NSIndexPath willDisplayIndexPath;
@property (nonatomic) NSIndexPath didEndDisplayingIndexPath;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL enableFeedSplit;
- (id)aAWEPadModuleAdapter;
- (void)setWillDisplayIndexPath:;
- (id)willDisplayIndexPath;
- (void)setDidEndDisplayingIndexPath:;
- (id)didEndDisplayingIndexPath;
- (BOOL)enableFeedSplit;
- (void)setEnableFeedSplit:;
- (BOOL)isShowing;
- (BOOL)isRefreshing;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (void)setIsRefreshing:;
- (void)setIsShowing:;
+ (Class)aAWEPadModuleAdapterClass;
@end
