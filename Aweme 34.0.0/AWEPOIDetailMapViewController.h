@interface AWEPOIDetailMapViewController : UIViewController
@property (nonatomic) AWEMapPOIInfoModel mapPoiInfo;
@property (nonatomic) UIView backgroundMapView;
@property (nonatomic) UIView gradientTopBar;
@property (nonatomic) AWEPOIDetailMapViewModel mapModel;
@property (nonatomic) DUXNavigationBar theNewStyleNavigation;
@property (nonatomic) AWEPOICommonModalViewController poiModalVC;
@property (nonatomic) AWEPOIMapInfoContentView modalContentView;
@property (nonatomic) BOOL shouldReturnMapView;
@property (nonatomic) BOOL firstAppear;
@property (nonatomic) q aroundHotPoiCount;
@property (nonatomic) NSString referStr;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString sessionID;
@property (nonatomic) AWEPOIMapContext context;
@property (nonatomic) NSString saleChannel;
@property (nonatomic) UIPinchGestureRecognizer mapPinchGes;
@property (nonatomic) UIPanGestureRecognizer mapPanGesture;
@property (nonatomic) UIView authorizeLocationView;
@property (nonatomic) NSDictionary trackInfo;
@property (nonatomic) BOOL showModal;
@property (nonatomic) Q contentStyle;
@property (nonatomic) AWEPOIDetailResponse modalDetail;
@property (nonatomic) NSString mapSessionId;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) AWEPOIMapInfoContentDataManager contentDataManager;
@property (nonatomic) AWELocationServicePersistModel locationModel;
@property (nonatomic) BOOL hasTrackTransportShown;
@property (nonatomic) BOOL hasTrackAddressShown;
@property (nonatomic) BOOL lastLocationPermissionStatus;
@property (nonatomic) double originBtnWeight;
@property (nonatomic) UIView branchListView;
@property (nonatomic) UILabel branchListLabel;
@property (nonatomic) UIImageView branchListIcon;
@property (nonatomic) UIView branchListContentView;
@property (nonatomic) UIView backView;
@property (nonatomic) AWENoActionEventHandler actionHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (BOOL)configWithRouterParamDict:;
- (id)enterMethod;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)handleAppEnterForeground;
- (void)trackStayTime;
- (BOOL)showModal;
- (id)locationModel;
- (void)setLocationModel:;
- (id)saleChannel;
- (void)bindActionAndState;
- (BOOL)inTheSameCity;
- (void)trackClickReportButton;
- (id)modalContentView;
- (BOOL)shouldHideShadowViewAfterPresentInitialModal;
- (void)didModalContentFrameChange:;
- (BOOL)shouldForbidTopOverlapViewAlphaChangeWhenPageChange:;
- (void)changePageSizeModel:isChangedByPull:;
- (BOOL)shouldForceModalViewChangeStatusWithDeltaY:velocityY:;
- (void)willPresentVCWithIsModal:;
- (void)willReloadMapContent;
- (void)setModalContentView:;
- (long long)aroundHotPoiCount;
- (void)setMapPoiInfo:;
- (id)p_createMapViewModel;
- (void)buildContextWithRouterParams:;
- (BOOL)hasLocationPermission;
- (BOOL)lastLocationPermissionStatus;
- (void)p_updateMapModel;
- (id)getSuitableModalPageModel;
- (void)setupAuthorizeViewWithInitialModel:;
- (void)setLastLocationPermissionStatus:;
- (void)setShouldReturnMapView:;
- (void)p_setupGradientTopBar;
- (void)p_setupMapNavigationBar;
- (void)p_setupPOIModal;
- (void)setupActionHandler;
- (void)mapModelDidChooseToShowNavigate:;
- (id)mapModel;
- (id)poiModalVC;
- (BOOL)hasTrackAddressShown;
- (id)referStr;
- (void)setHasTrackAddressShown:;
- (BOOL)hasTrackTransportShown;
- (void)setHasTrackTransportShown:;
- (void)p_prepareMapView;
- (BOOL)shouldReturnMapView;
- (id)backgroundMapView;
- (void)setBackgroundMapView:;
- (id)mapPinchGes;
- (void)handleDragOnMap:;
- (void)p_setupBackgroundMapView;
- (id)mapPoiInfo;
- (void)updateMapViewModelVisibleRectWithPageHeight:;
- (id)modalDetail;
- (void)tryToLocateWithCompletion:;
- (void)setTheNewStyleNavigation:;
- (void)handleTapOnBackButton:;
- (id)theNewStyleNavigation;
- (void)setGradientTopBar:;
- (id)gradientTopBar;
- (id)mapPanGesture;
- (void)p_setupReportErrorAction:schema:;
- (id)reportErrorBtn:schema:;
- (void)jumpToReportErrorPage:;
- (void)p_setupPOIModalViewWithResponse:;
- (void)p_setupRightAction:;
- (void)setModalDetail:;
- (id)mapSessionId;
- (void)setPoiModalVC:;
- (void)setContentDataManager:;
- (id)contentDataManager;
- (id)setupBranchListView;
- (void)setBranchListView:;
- (id)branchListLabel;
- (id)branchListView;
- (double)branchListOffsetY;
- (id)authorizeLocationView;
- (void)expandBranchListView;
- (void)setAuthorizeLocationView:;
- (void)didTapAuthorizeLocationView;
- (void)didCloseAuthorizeLocationView;
- (BOOL)shouldCollapseBranchView;
- (void)collapseBranchListView;
- (double)btnRatio:;
- (void)reloadBranchListViewOffsetYIfNeed;
- (void)updateLayoutToExpandView;
- (void)updateLayoutToCollapseView;
- (void)jumpToBranchListPage;
- (id)branchListContentView;
- (id)branchListIcon;
- (double)originBtnWeight;
- (void)mapViewDidTapAnnotation:annotationType:;
- (void)trackSwitchNaviMode:;
- (void)setMapModel:;
- (void)setAroundHotPoiCount:;
- (void)setReferStr:;
- (void)setSaleChannel:;
- (void)setMapPinchGes:;
- (void)setMapPanGesture:;
- (void)setShowModal:;
- (void)setMapSessionId:;
- (void)setOriginBtnWeight:;
- (void)setBranchListLabel:;
- (void)setBranchListIcon:;
- (void)setBranchListContentView:;
- (void)setSessionID:;
- (id)actionHandler;
- (void)setActionHandler:;
- (id)itemID;
- (void)setItemID:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (id)sessionID;
- (void)setContext:;
- (void)viewWillAppear:;
- (id)backView;
- (void).cxx_destruct;
- (unsigned long long)contentStyle;
- (void)viewDidAppear:;
- (void)setBackView:;
- (id)context;
- (void)handlePinch:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setFirstAppear:;
- (BOOL)firstAppear;
- (void)setTrackInfo:;
- (id)trackInfo;
- (id)authorID;
- (void)setAuthorID:;
- (void)setContentStyle:;
@end
