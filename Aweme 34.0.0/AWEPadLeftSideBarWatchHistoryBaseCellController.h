@interface AWEPadLeftSideBarWatchHistoryBaseCellController : NSObject
@property (nonatomic) AWEPadLeftSideBarWatchHistoryPresenter presenter;
- (void)configView:;
- (BOOL)isCellControllerValid;
- (id)presenter;
- (void)setPresenter:;
- (void).cxx_destruct;
- (id)initWithRawData:;
- (void)didSelectItem;
@end
