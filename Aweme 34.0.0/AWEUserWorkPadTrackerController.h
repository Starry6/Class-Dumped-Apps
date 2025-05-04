@interface AWEUserWorkPadTrackerController : AWEUserWorkController
@property (nonatomic) <AWEProfilePadServiceProtocol> padService;
@property (nonatomic) q profileTabType;
- (void)containerViewDidAppear:;
- (void)containerViewDidDisappear:;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (long long)profileTabType;
- (void)trackAllCellShowIfNeeded;
- (void)removePadTrackItemIDs;
- (void)trackPadCellShowWithModel:indexPath:;
- (void)setProfileTabType:;
- (id)padService;
- (void)setPadService:;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
@end
