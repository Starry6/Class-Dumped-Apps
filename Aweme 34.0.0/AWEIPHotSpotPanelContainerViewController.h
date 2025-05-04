@interface AWEIPHotSpotPanelContainerViewController : AWEHotPointPanelBaseViewController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSAttributedString titleAttributedStr;
@property (nonatomic) BOOL isRecommendViewShowing;
- (id)panelViewController;
- (void)setPanelViewController:;
- (void)setupBinding;
- (id)currentTabManager;
- (id)currentTabRecommendManager;
- (void)updatePanelLayoutWithCurrentModel:;
- (void)refreshWithData:risingHotSpotList:paramsModel:otherParams:;
- (void)setIsRecommendViewShowing:;
- (BOOL)isRecommendViewShowing;
- (void)doSpecificUIConfig;
- (id)panelScrollView;
- (double)totalPanelViewHeight;
- (id)titleAttributedStr;
- (void)setTitleAttributedStr:;
- (void)viewDidLoad;
- (double)titleHeight;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
