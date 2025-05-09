@interface AWEProfilePostAnalysisController : AWEPlayInteractionNewBaseController
@property (nonatomic) DUXContentSheet sheet;
@property (nonatomic) AWEProfilePostAnalysisViewController containerVC;
@property (nonatomic) AWEAwemeModel lastModel;
@property (nonatomic) BOOL lastPrivateStatus;
@property (nonatomic) BOOL isShowingPanel;
@property (nonatomic) BOOL isOnlyPostDiagnoseTab;
@property (nonatomic) BOOL lynxContentReady;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)panelHeight;
- (void)setEnterFrom:;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetWillDismiss:;
- (void)sheetDidDismiss:;
- (void)sheet:didChangeFrame:withUserInteraction:;
- (id)enterFrom;
- (void)setContainerVC:;
- (BOOL)isPanelShowed;
- (id)containerVC;
- (id)toolBarModel;
- (long long)diagnoseStyle;
- (id)panelManager;
- (BOOL)isShowingPanel;
- (void)setIsShowingPanel:;
- (id)lastModel;
- (void)setLastModel:;
- (id)generateSchemaParamsWhenOpenPanel;
- (BOOL)isOnlyPostDiagnoseTab;
- (BOOL)schedulePostNeedAdjustPanelHeight;
- (BOOL)needResetProfilePostAnalysisController;
- (void)showAnalysisPanelWithModel:;
- (void)checkContentReady;
- (void)showAnalysisPanelWithNotification:;
- (void)closeChapterPanelLynxView:;
- (void)setIsOnlyPostDiagnoseTab:;
- (id)createSheetWith:;
- (BOOL)shouldShowShrinkVideoWithAwemeModel:;
- (void)switchPlayInteractionPureMode:;
- (BOOL)needBlockCloseSheet;
- (BOOL)needRefreshLynxView;
- (BOOL)lastPrivateStatus;
- (id)createPostAnalysisVC;
- (void)setLastPrivateStatus:;
- (id)viewerItemModel;
- (id)analysisItemModel;
- (void)setLynxContentReady:;
- (void)replaceWithModel:;
- (BOOL)lynxContentReady;
- (BOOL)isShownPostAnalysisPanel;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)videoHeight;
- (void)reset;
- (id)sheet;
- (void)setSheet:;
@end
