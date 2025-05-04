@interface AWEFeedTableViewLifeCycleDetector : AWEBaseController
@property (nonatomic) NSMutableDictionary cellTStates;
- (void)setCellTStates:;
- (BOOL)currentSceneEnable;
- (id)awemeModelFromCell:;
- (id)cellTStates;
- (long long)moveToNextState:;
- (void)checkStates;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
@end
