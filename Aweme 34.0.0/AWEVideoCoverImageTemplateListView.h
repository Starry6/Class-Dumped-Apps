@interface AWEVideoCoverImageTemplateListView : UIView
@property (nonatomic) UIView normalView;
@property (nonatomic) AWEVideoCoverImageTemplateListTabsView tabsView;
@property (nonatomic) AWEVideoCoverImageTemplateListContentView templatesView;
@property (nonatomic) AWEVideoCoverImageTemplateProviderView providerView;
@property (nonatomic) UIView loadingView;
@property (nonatomic) UIView<ACCLoadingViewProtocol> loadingIndicator;
@property (nonatomic) UIView networkErrorView;
@property (nonatomic) UIView<ACCDUXLoadingInstance> progressLoadingView;
@property (nonatomic) AWENewVideoCoverEditTemplateViewModel viewModel;
@property (nonatomic) BOOL hasFirstRenderedTemplateReport;
@property (nonatomic) UIView currentView;
@property (nonatomic) <AWEVideoCoverImageTemplateListViewDelegate> delegate;
@property (nonatomic) q loadStatus;
@property (nonatomic) BOOL selectInvertEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)normalView;
- (void)setNormalView:;
- (id)networkErrorView;
- (void)setNetworkErrorView:;
- (id)progressLoadingView;
- (void)setProgressLoadingView:;
- (void)templateSelectSetup;
- (void)reloadTemplateList;
- (void)applyTemplateSuccess;
- (void)reselectTemplateModel;
- (void)applyTemplateFailed;
- (void)setSelectInvertEnabled:;
- (void)clearTemplateChooseStatus;
- (void)networkErrorButtonClicked:;
- (void)setCurrentSelectedTabIndexPath:;
- (void)p_scrollToIndexPath:;
- (void)p_trackApplyTemplateEndWithIfSuccess:;
- (void)p_selectTemplateAtIndexPath:unselectIndexPath:defaultTabIndexPath:;
- (id)currentSelectedTabIndexPath;
- (void)templateImageDoSelectForIndexPath:;
- (BOOL)selectInvertEnabled;
- (BOOL)hasFirstRenderedTemplateReport;
- (void)setHasFirstRenderedTemplateReport:;
- (void)p_setupLoading;
- (void)p_setupNetworkError;
- (void)templateListContentView:didMoveToIndexPath:;
- (void)templateListContentView:checkBeforeSelectIdxPath:isInvertSelect:isHistory:;
- (void)templateListContentView:showAuthorInfoWith:isHistory:;
- (void)markEnterType:atIndex:;
- (void)tabsView:didSelectAtIndexPath:;
- (void)clearButtonClickedInTabsView:;
- (void)p_setupNormal;
- (id)tabsView;
- (id)templatesView;
- (id)providerView;
- (void)p_showComplianceNotificationAndAuthorInfoAndClearBtnStatusWith:isHistory:;
- (void)p_loadingViewDismiss;
- (void)p_selectTemplateAtIndexPath:isHistory:;
- (void)p_trackApplyTemplateCancelWithUnselectedIndexPath:;
- (void)p_loadingViewShowWithCancelBlock:;
- (void)p_clearTemplateInfo;
- (void)selectTemplateWithLoadingAtIndexPath:isHistory:;
- (id)p_viewForLoadStatus:;
- (void)setTabsView:;
- (void)setTemplatesView:;
- (void)setProviderView:;
- (void)reloadData;
- (id)delegate;
- (void)setLoadingView:;
- (id)viewModel;
- (id)loadingView;
- (long long)loadStatus;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setLoadStatus:;
- (id)loadingIndicator;
- (void)setLoadingIndicator:;
- (void)showLoadingView;
- (id)initWithFrame:viewModel:;
- (void)setCurrentView:;
- (id)currentView;
@end
