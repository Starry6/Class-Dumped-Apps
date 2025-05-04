@interface AWEHotSpotFeedDispatcher : AWEBaseController
@property (nonatomic) <AWEHotSpotFeedDispatcherDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onScrollViewWillBeginDragging:;
- (void)cellWillDisplay:forRowAtIndexPath:tableView:;
- (void)onScrollDidEndWithIndexPath:;
- (void)initialDataSourceFetchDidFinished;
- (void)viewWillEndCoordinatorTransitionAnimation:;
- (void)onScrollWillChangeVideo:index:directTop:;
- (void)onScrollDidScroll:nextModel:percentage:;
- (void)onScrollBackToIndex:;
- (void)didEndConfigingCell:atIndexPath:tableView:;
- (void)onCellDidEndDisplay:;
- (void)tableViewWillTransitionToSize:isLiveRoomRotate:;
- (void)configVoiceOverElements;
- (void)hideInteractionView:andMoreView:;
- (void)viewWillDisappear:;
- (id)delegate;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setDelegate:;
@end
