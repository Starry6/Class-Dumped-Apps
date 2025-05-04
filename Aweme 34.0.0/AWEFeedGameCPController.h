@interface AWEFeedGameCPController : AWEBaseController
@property (nonatomic) NSMutableArray awemeModelArray;
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configureCell:withModel:atIndexPath:;
- (void)tableView:didEndDisplayingCellBeforeReset:forRowAtIndexPath:;
- (void)currentPlayVideoDidChangePlayState:;
- (void)videoPlayer:updatePlayTime:totalTime:;
- (id)awemeModelWithIndexPath:;
- (void)setAwemeModelArray:;
- (id)awemeModelArray;
- (id)shouldPreventPlayIfActive;
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
- (id)currentModel;
- (void)setCurrentModel:;
@end
