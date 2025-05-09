@interface AWEShareLiveBaseService : AWEShareCommonImpl
@property (nonatomic) UIView topContainerCardView;
@property (nonatomic) AWEShareContext context;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) NSArray friends;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWEShareListPanel landscapePanel;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) AWECyclePagerView pagerView;
@property (nonatomic) BOOL willShareToChannel;
@property (nonatomic) BOOL notCallDismissHandler;
@property (nonatomic) @? willDismissHandler;
@property (nonatomic) AWEShareBasePanelController targetSharePanel;
@property (nonatomic) UIView targetView;
@property (nonatomic) BOOL isTopContainerLoaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)numberOfItemsInPagerView:;
- (id)pagerView:cellForItemAtIndex:;
- (id)shareLive:withType:;
- (void)shareLandscapeLive:withType:willDismissHandler:;
- (id)showPanelWithLive:configurationHandler:onViewController:;
- (id)showTwoSectionPanelWithLive:onViewController:;
- (void)shareImage:onViewController:dismissHandler:;
- (id)showPanelWithFormat:configurationHandler:onViewController:;
- (void)showTokenAlertWithLive:shareType:pasteHandler:;
- (id)showPosterPanelWithLive:onViewController:;
- (void)showLandscapePanelWithLive:onViewController:willDismissHandler:;
- (void)showLandscapePanelWithLiveScreenshot:onViewController:;
- (id)showImageShareLandscpaePanelWithLive:onViewController:willDismissHandler:;
- (double)landscapePanelWidth;
- (id)showShareLiveImagePanelWithLive:onViewController:dismissHandler:;
- (void)configLiveTokenWithContext:;
- (id)contextWithLive:;
- (id)pagerView;
- (void)hideTopContainerView;
- (void)showTopContainerView;
- (void)dismissTopContainerView;
- (id)layoutForPagerView:;
- (void)pagerView:didScrollToIndex:;
- (id)showCommonPanelWithConfiguration:onViewController:;
- (void)setTopContainerCardView:;
- (id)topContainerCardView;
- (void)setTargetSharePanel:;
- (void)setIsTopContainerLoaded:;
- (id)targetSharePanel;
- (void)dismissTopContainerViewWithAnimated:completion:;
- (BOOL)isTopContainerLoaded;
- (double)p_postPreviewOffset;
- (BOOL)shouldLoadTopContainerWithContext:;
- (void)buildWithContext:sharePanel:onView:;
- (void)updateTopContianerView;
- (void)showTopContainerViewWithAnimated:completion:;
- (id)taskWithLive:;
- (void)setChannelWithContext:;
- (id)showSummerSongPanelWithLive:configurationHandler:onViewController:;
- (id)createShareChainPreviewViewsWithLiveModel:downLoadCompletion:;
- (id)createShareChainSaveViewsWithLiveModel:downLoadCompletion:;
- (void)addQRCodeImageIfNeedWithLiveModel:loadingView:;
- (id)taskWithFormat:;
- (void)setNotCallDismissHandler:;
- (id)liveShareListItemWithTask:;
- (BOOL)notCallDismissHandler;
- (void)setLandscapePanel:;
- (void)fetchContactListWithCompletion:;
- (id)liveScreenShotShareItemWithTask:;
- (void)showVerticalCycleViewOnPanel:context:;
- (id)applySJBBackgroundLayer:isLandscape:;
- (void)setPagerView:;
- (void)trackPreViewShow;
- (id)imModelWithTask:;
- (id)channelModelWithTask:;
- (id)actionModelWithTask:;
- (id)landscapePanel;
- (BOOL)canShowForwardToStoryWithContext:;
- (BOOL)enableSimpleDownloadWithContext:;
- (id)prepareShareCompletion;
- (BOOL)willShareToChannel;
- (id)shareLiveImageListItemsWithTask:;
- (void)topPreviewTapGesture;
- (void)setWillShareToChannel:;
- (void)trackPreviewCardSaveButtonClickedWithShareType:index:;
- (void)p_fetchTokenWithLive:shareType:loadingView:pasteHandler:;
- (void)trackPreViewShow:;
- (void)configChannelWithContext:;
- (id)liveShareGuideIconWithPlatform:;
- (id)contextWithFormat:;
- (id)friends;
- (void)setHasMore:;
- (void)setLoadingView:;
- (id)targetView;
- (id)loadingView;
- (BOOL)hasMore;
- (void)setTargetView:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setFriends:;
- (id)context;
- (id)countLabel;
- (void)setCountLabel:;
- (void)setWillDismissHandler:;
- (id)willDismissHandler;
@end
