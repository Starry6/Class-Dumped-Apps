@interface AWELeftSideBarRecentVisitAppPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) AWELeftSideBarRecentVisitAppContainerView containerView;
@property (nonatomic) AWELeftSideBarRecentVisitAppCellConfig config;
@property (nonatomic) double containerViewHeight;
@property (nonatomic) AWELeftSideBarDynamicDataAppModel leftSideBarDynamicDataAppModel;
@property (nonatomic) BOOL recentVisitAppUIIsShow;
@property (nonatomic) BOOL needForceRefreshWhenAppear;
@property (nonatomic) double uniqId;
@property (nonatomic) double openTime;
@property (nonatomic) AWELeftSideBarAppPresenterActionContext actionContext;
@property (nonatomic) NSMutableDictionary performanceDict;
@property (nonatomic) BOOL hasClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:;
- (void)onLeftSideBarWillOpen;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (void)leftSideBarViewDynamicModuleRequestDataComplete:isCacheData:;
- (void)leftSideBarViewDynamicModuleRequestDataFailed;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewDidAppear;
- (void)leftSideBarViewWillDisAppear;
- (void)showReloadAnimation;
- (void)leftSideBarPresenterOnCreate;
- (void)leftSideBarViewDynamicModuleForceRequestDataComplete:;
- (id)contentViewWithSubBusinessID:;
- (double)containerViewHeight;
- (double)openTime;
- (void)setOpenTime:;
- (void)setContainerViewHeight:;
- (id)getIronManModuleService;
- (id)leftSideBarListCellDataModel:;
- (void)updateDynamicData:isCacheData:;
- (double)uniqId;
- (void)setUniqId:;
- (id)leftSideBarRecentVisitAppContainerViewGetLeftSideBarIdentification:;
- (void)leftSideBarRecentVisitAppContainerViewDidUpdateData:modules:fromCache:;
- (double)leftSideBarRecentVisitAppContainerViewGetUniqId:;
- (void)leftSideBarRecentVisitAppContainerView:showHighValueModel:index:;
- (void)leftSideBarRecentVisitAppContainerView:clickHighValueModel:index:;
- (void)leftSideBarRecentVisitAppContainerView:clickAllButtonWithSchema:;
- (void)leftSideBarRecentVisitAppContainerView:clickLinkModel:;
- (void)leftSideBarRecentVisitAppContainerView:clickCellWithItemModel:withSchema:index:;
- (id)leftSideBarRecentVisitAppContainerView:getLeftSideBarTrackParamsForBusiness:;
- (id)leftSideBarListCellConfigDataModel:;
- (void)setPerformanceDict:;
- (id)performanceDict;
- (BOOL)hasClick;
- (void)setHasClick:;
- (id)leftSideBarDynamicDataAppModel;
- (void)p_reportSidebarUseInfo;
- (void)realRequestAppCaption;
- (void)p_requestCaptionCallbackWithIsDisplay:isClick:getCaptionModel:completion:;
- (void)p_requestAppCaption;
- (BOOL)moduleCanShow;
- (void)setRecentVisitAppUIIsShow:;
- (void)leftSideBarViewDynamicModuleRequestDataComplete:isCacheData:isForceRefresh:;
- (BOOL)recentVisitAppUIIsShow;
- (void)preloadTimorContext;
- (void)track_leftSideBarRecentVisitAppShow:;
- (void)setLeftSideBarDynamicDataAppModel:;
- (long long)calculateMaxLineCount;
- (id)p_traceParamsForDynamicItemDataModel:index:;
- (BOOL)needForceRefreshWhenAppear;
- (void)setNeedForceRefreshWhenAppear:;
- (void)setConfig:;
- (id)config;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)actionContext;
- (void)setActionContext:;
- (void)setupConfig;
- (double)calculateHeight;
@end
