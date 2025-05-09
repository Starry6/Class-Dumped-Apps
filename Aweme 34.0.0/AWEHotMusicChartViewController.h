@interface AWEHotMusicChartViewController : UIViewController
@property (nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> detailVC;
@property (nonatomic) AWEMusicChartVideoDetailController dataController;
@property (nonatomic) DUXContentSheet panelSheet;
@property (nonatomic) AWEHotMusicTopTitleView topTitleView;
@property (nonatomic) AWEAwemeModel currentAwemeModel;
@property (nonatomic) NSString currentMusicId;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSString chartId;
@property (nonatomic) NSString version;
@property (nonatomic) NSString firstMusicId;
@property (nonatomic) NSDictionary bottomInfoDict;
@property (nonatomic) NSArray musicList;
@property (nonatomic) NSMutableSet cellHasReported;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentAwemeModel;
- (id)referString;
- (BOOL)configWithRouterParamDict:;
- (void)detailTableViewController:scrollDidEndAtIndexPath:model:;
- (BOOL)detailTableViewControllerNeedUpdateBottomBarWhenReload:;
- (void)sheetDidDismiss:;
- (void)setReferString:;
- (void)setDataController:;
- (id)musicList;
- (void)setMusicList:;
- (id)detailVC;
- (void)setDetailVC:;
- (void)setCurrentAwemeModel:;
- (id)bottomInfoDict;
- (void)setBottomInfoDict:;
- (void)showPanelVC;
- (void)setPanelSheet:;
- (id)panelSheet;
- (void)shouldDismissPanelVC;
- (id)topTitleView;
- (void)setTopTitleView:;
- (id)currentMusicId;
- (void)shootSameWithMusicInfo:;
- (void)selectMusicWithIndex:;
- (void)cellWillDisplayWithIndex:;
- (void)setCurrentMusicId:;
- (id)initWithDataController:initialIndex:referString:sessionId:chartId:version:musicId:logExtraDict:bottomInfoDict:;
- (void)hotMusicChartBottomBarShowPanelClick;
- (void)updateTopTitleView;
- (id)chartId;
- (void)trackMusicListEntranceWithEventName:;
- (void)trackMusicListPageShow;
- (void)trackMusicListClientWithEventName:index:;
- (id)firstMusicId;
- (void)setFirstMusicId:;
- (id)cellHasReported;
- (void)trackShootBtnShowWithIndex:;
- (void)setCellHasReported:;
- (void)loadPreviousHasPreviousIsFalse;
- (void)setChartId:;
- (void)setSessionId:;
- (id)sessionId;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (id)version;
- (void)setVersion:;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)setupUI;
- (id)dataController;
@end
