@interface AWEAwemeDetailGameCPController : AWEAwemeNewDetailBaseController
@property (nonatomic) NSMutableArray awemeModelArray;
- (void)tableView:didEndDisplayingCellBeforeReset:forRowAtIndexPath:;
- (id)awemeModelWithIndexPath:;
- (void)configCell:atIndexPath:tableView:;
- (void)setAwemeModelArray:;
- (id)awemeModelArray;
- (void)destroyContainerIfNeedWithAwemeModel:;
- (void)updateContainerIfNeedWithAwemeModel:cell:;
- (void)handleCreateContainerWithCell:withModel:;
- (void)prepareGameInfoWithAwemeModel:cell:;
- (void)beforeResestContainerWithAwemeModel:;
- (void)createContainerIfNeedWithAwemeModel:panelController:interactionController:feedCellController:halfPanelController:;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
@end
