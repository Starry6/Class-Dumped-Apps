@interface AWESearch7SplitScreenLandingPageViewController : UIViewController
@property (nonatomic) DUXPartialSheet partialSheet;
@property (nonatomic) AWEAdWebViewController adWebViewController;
@property (nonatomic) AWESearchAD7SplitScreenLandingPageBottomView bottomView;
@property (nonatomic) DUXNavigationBar naviBar;
@property (nonatomic) double screenHeight;
@property (nonatomic) double sevenSplitScreenHeight;
@property (nonatomic) double videoHeightInShrink;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) AWEBDARifleViewController lynxVC;
@property (nonatomic) BOOL shouldUsePanelManager;
@property (nonatomic) double sheetRation;
@property (nonatomic) AWESearchAD7SpliteScreenLandingPageParams pageParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)partialSheetDidDismiss:;
- (void)partialSheet:didChangeFrame:withUserInteraction:;
- (void)partialSheetWillFloded:;
- (void)partialSheetDidFloded:;
- (void)partialSheetWillExpanded:;
- (void)partialSheetDidExpanded:;
- (void)partialSheetDidClickMaskArea:;
- (void)partialSheetDidDragToDismiss:;
- (void)partialSheetWillDismiss:;
- (void)partialSheetDidDragToExpanded:;
- (void)trackPageShow;
- (void)setLynxVC:;
- (id)lynxVC;
- (id)pageParams;
- (void)setPageParams:;
- (id)naviBar;
- (void)rifleViewController:loadFailedWithErrorInfo:;
- (void)setNaviBar:;
- (void)setPartialSheet:;
- (id)partialSheet;
- (id)adWebViewController;
- (void)setAdWebViewController:;
- (void)onRightSurveyButtonClicked;
- (void)showLynxSurveyWithEnterMethod:;
- (void)showLandingPage;
- (void)setShouldUsePanelManager:;
- (void)setSheetRation:;
- (double)sheetRation;
- (void)setSevenSplitScreenHeight:;
- (void)setVideoHeightInShrink:;
- (BOOL)enableLynxLandingPage;
- (void)setupLynxViewContainer;
- (void)setupAdWebViewContainer;
- (BOOL)shouldUsePanelManager;
- (void)setupBottomView;
- (void)setBottomViewHidden:animation:;
- (void)preventAutoPauseVideo;
- (void)shrinkVideoWithAnimation:;
- (void)showLandingPageWithDUX;
- (double)sevenSplitScreenHeight;
- (void)addBottomViewToContainerView;
- (double)videoHeightInShrink;
- (void)updateBottomViewAlphaWithSheetTop:;
- (void)publishEventToH5WithPartialSheetExpanded:;
- (void)setSearchBarHidden:animation:;
- (void)magnifyVideo;
- (void)trackClickTopAreaToDismiss;
- (void)trackSlideDownToDismiss;
- (void)trackSlideUpToExpanded;
- (void)trackDidClickBottomView;
- (void)trackDidClickBottomButton;
- (id)landingPageReferString;
- (BOOL)isLandingPageInFoldedState;
- (void)setIsExpanded:;
- (id)init;
- (BOOL)isExpanded;
- (void)dealloc;
- (void)viewDidLoad;
- (double)screenHeight;
- (void)setScreenHeight:;
- (void).cxx_destruct;
- (id)bottomView;
- (void)setBottomView:;
- (void)setupNavigationBar;
- (void)pauseVideo;
- (void)playVideo;
@end
