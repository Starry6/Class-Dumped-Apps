@interface AWEPOIAlbumVideoSyncFeedUtil : AWEListDataController
@property (nonatomic) q enterIndex;
@property (nonatomic) q targetIndex;
@property (nonatomic) NSString transitionClassName;
@property (nonatomic) <AWEPOIAlbumVideoSyncFeedUtilDelegate> delegate;
@property (nonatomic) BOOL isTransitionUpdating;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zoomTransitionStartViewForOffset:;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)modernTransitionContext;
- (void)setEnterIndex:;
- (void)modernTransitionUpdateOffset:isScrolled:;
- (void)modernTransitionDidCompleteWithOffset:;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:;
- (long long)enterIndex;
- (void)transferToViewController:transitionClassName:;
- (BOOL)isTransitionUpdating;
- (void)setIsTransitionUpdating:;
- (BOOL)shouldUseFullScreenShrinkTransitionWithOffset:isLive:;
- (id)generateFeedVCWithEnterIndex:referString:enterFrom:params:;
- (void)fetchWithPullType:completion:;
- (void)refreshLoadMoreStatus;
- (void)fetchFilteredDataSource;
- (void)setTransitionClassName:;
- (long long)calculateTargetIndexWhenReturnDetailPageWithOffset:;
- (id)transitionClassName;
- (long long)targetIndex;
- (id)delegate;
- (void)resetData;
- (void)setTargetIndex:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)reset;
- (void)setDelegate:;
@end
