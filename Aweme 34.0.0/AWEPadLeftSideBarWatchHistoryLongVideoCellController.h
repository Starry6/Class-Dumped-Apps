@interface AWEPadLeftSideBarWatchHistoryLongVideoCellController : AWEPadLeftSideBarWatchHistoryBaseCellController
@property (nonatomic) AWEPadLeftSideBarWatchHistoryLongVideoCellModel model;
- (void)configView:;
- (BOOL)isCellControllerValid;
- (void)transferFail:errorMsg:sceneName:moduleNname:;
- (BOOL)Enable;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)initWithRawData:;
- (void)didSelectItem;
@end
