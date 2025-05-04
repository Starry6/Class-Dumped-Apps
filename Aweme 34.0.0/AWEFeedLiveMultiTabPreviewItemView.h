@interface AWEFeedLiveMultiTabPreviewItemView : UIView
@property (nonatomic) UIViewController<AWEFeedTableViewControllerProtocol><AWEFeedTabItemViewControllerProtocol> feedTableViewController;
@property (nonatomic) AWEFeedLiveMultiTabPreviewCellModel cellModel;
- (void)setCellModel:;
- (id)feedTableViewController;
- (void)setFeedTableViewController:;
- (BOOL)needTriggerTabItemLifeCycle;
- (void)configCellWithModel:parentVC:;
- (BOOL)existFeedTableViewController;
- (void)feedRefreshWithCompletion:;
- (void)removeFromSuperview;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (id)cellModel;
@end
