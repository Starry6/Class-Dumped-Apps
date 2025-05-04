@interface AWEBarPanelBaseVCHandler : NSObject
@property (nonatomic) AWEBarPanelDetailTableViewController detailViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPanelShowing;
- (id)initWithDetailViewController:;
- (BOOL)enableAutoPlayNextVideo;
- (void)panelDetailDidFinishLoadMore;
- (id)bottomBarNameInVC:;
- (void)willPlayNextVideo:;
- (void)didShowPanelViewWithEnterType:;
- (void)didHiddenPanelView;
- (void)panelController:didClickCell:atIndexPath:;
- (void)panelController:didLoadPreviousWithList:;
- (void)panelController:didLoadMoreWithList:;
- (void)panelController:didClickPanelTopContent:;
- (void)panelController:didClickClose:;
- (void)panelController:panelDragProgress:;
- (id)detailViewController;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillDisappear;
@end
