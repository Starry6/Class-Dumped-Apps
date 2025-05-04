@interface AWEProfilePostAnalysisViewerController : NSObject
@property (nonatomic) UIViewController<AWEViewedUserListPanelViewControllerProtocol> viewerVC;
@property (nonatomic) AWEProfilePostAnalysisTabItemModel itemModel;
@property (nonatomic) AWEProfilePostAnalysisModel panelModel;
@property (nonatomic) <AWEProfilePostAnalysisTabItemDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)enterSource;
- (id)goldLikeTabContext;
- (void)processGestureWithView:;
- (id)itemModel;
- (void)setItemModel:;
- (id)currentScrollView;
- (void)setPanelModel:;
- (id)panelModel;
- (id)currentItemModel;
- (id)createViewerVC;
- (void)setViewerVC:;
- (id)viewerVC;
- (id)delegate;
- (void)setup;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)currentViewController;
- (unsigned long long)currentTab;
+ (id)createWithItemModel:panelModel:delegate:;
@end
