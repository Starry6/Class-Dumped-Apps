@interface AWEFeedSwitchPreviewViewController : UIViewController
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> c2VC;
@property (nonatomic) AWEFeedTableViewController feedTableVC;
@property (nonatomic) q target;
@property (nonatomic) NSString exitMethod;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIView c2View;
@property (nonatomic) UIView c2SuperView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} c2Frame;
@property (nonatomic) Q c2IndexOfSuperView;
@property (nonatomic) UIView c2UnselectView;
@property (nonatomic) UIView c2BorderView;
@property (nonatomic) UIView c2ContainerView;
@property (nonatomic) UIView c2WrapperView;
@property (nonatomic) UIView c2UnderWhiteView;
@property (nonatomic) UIViewController c2VCParentVC;
@property (nonatomic) UIView feedTableView;
@property (nonatomic) UIView feedTableSuperView;
@property (nonatomic) UIView feedTableUnselectView;
@property (nonatomic) UIView feedTableContainerView;
@property (nonatomic) UIView feedTableWrapperView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} feedTableFrame;
@property (nonatomic) Q feedTableIndexOfSuperView;
@property (nonatomic) UIViewController feedTableParentVC;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEFeedSwitchPreviewStackedFlowLayout customLayout;
@property (nonatomic) UIControl backgroundControl;
@property (nonatomic) UIView refreshView;
@property (nonatomic) UIImageView refreshImageView;
@property (nonatomic) UILabel refreshLabel;
@property (nonatomic) UIView bottomSettingView;
@property (nonatomic) UIImageView bottomSettingImageView;
@property (nonatomic) UIView topSettingView;
@property (nonatomic) UIImageView topSettingImageView;
@property (nonatomic) UILabel topSettingLabel;
@property (nonatomic) @? refreshBlock;
@property (nonatomic) double lastTappedTime;
@property (nonatomic) BOOL isResignActive;
@property (nonatomic) BOOL alreadyTrackExitHomepageView;
@property (nonatomic) double enterTimestamp;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL clickVolumeKey;
@property (nonatomic) BOOL isInEnterAnimation;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) double beginTime;
@property (nonatomic) q isInOldEnterAnimation;
@property (nonatomic) BOOL isExiting;
@property (nonatomic) BOOL isClickRefreshed;
@property (nonatomic) BOOL ignoreLiveAutoPlay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q source;
@property (nonatomic) <AWEFeedSwitchPreviewViewControllerDelegate> delegate;
- (void)willStartLogin;
- (double)enterTimestamp;
- (void)setEnterTimestamp:;
- (void)refreshAction;
- (void)setExitMethod:;
- (id)feedTableVC;
- (void)setIsMute:;
- (id)systemVolumeDidChangeNotification;
- (void)setRefreshLabel:;
- (id)refreshLabel;
- (id)feedTableView;
- (void)willLoginAtPlatform:;
- (id)refreshView;
- (id)exitMethod;
- (void)setIsResignActive:;
- (BOOL)isResignActive;
- (void)setRefreshView:;
- (void)quitWithSelectIndex:animated:;
- (void)swipeAction;
- (id)feedTableWrapperView;
- (id)c2WrapperView;
- (id)c2ContainerView;
- (id)c2BorderView;
- (id)feedTableContainerView;
- (void)optiViewAnimated:containerView1:borderView1:toIndex1:wrapperView2:containerView2:borderView2:toIndex2:;
- (void)optiViewAnimated:containerView:borderView:toIndex:;
- (void)viewAnimated:containerView1:borderView1:toIndex1:wrapperView2:containerView2:borderView2:toIndex2:;
- (void)viewAnimated:containerView:borderView:toIndex:;
- (void)quitWithSelectCell:outCell:animated:;
- (double)collectionViewUpMargin;
- (id)refreshImageView;
- (id)bottomSettingView;
- (id)bottomSettingImageView;
- (id)topSettingView;
- (id)topSettingImageView;
- (id)topSettingLabel;
- (void)prepareC2RelatedViews;
- (void)prepareFeedTableRelatedViews;
- (id)feedTableUnselectView;
- (id)c2UnselectView;
- (void)setFeedTableParentVC:;
- (void)setFeedTableView:;
- (void)setFeedTableSuperView:;
- (void)setFeedTableFrame:;
- (id)feedTableSuperView;
- (void)setFeedTableIndexOfSuperView:;
- (void)generateBackgroundImage;
- (void)setFeedTableWrapperView:;
- (void)addViewShadow:;
- (void)removeViewShadow:;
- (void)setFeedTableContainerView:;
- (id)feedTableParentVC;
- (void)setFeedTableUnselectView:;
- (id)c2VC;
- (void)setC2VCParentVC:;
- (void)setC2View:;
- (id)c2View;
- (void)setC2Frame:;
- (void)setC2SuperView:;
- (id)c2SuperView;
- (void)setC2IndexOfSuperView:;
- (void)setC2WrapperView:;
- (void)setC2ContainerView:;
- (void)setC2BorderView:;
- (id)c2UnderWhiteViewWithFrame:;
- (void)setC2UnderWhiteView:;
- (id)c2UnderWhiteView;
- (id)c2VCParentVC;
- (void)setC2UnselectView:;
- (long long)isInOldEnterAnimation;
- (void)setIsInOldEnterAnimation:;
- (void)setIsInEnterAnimation:;
- (BOOL)isInEnterAnimation;
- (void)quitWithAnimationCancel;
- (void)optiMoveViewOutFromCell:animated:;
- (void)optiMoveViewToFullScreenFromCell:animated:;
- (void)moveViewOutFromCell:animated:;
- (void)moveViewToFullScreenFromCell:animated:;
- (void)c2Action;
- (void)feedTableAction;
- (void)updateCellTitleLabelAlphaWithContentOffsetX:;
- (void)settingAction;
- (id)c2Frame;
- (unsigned long long)c2IndexOfSuperView;
- (id)feedTableFrame;
- (unsigned long long)feedTableIndexOfSuperView;
- (void)setRefreshImageView:;
- (void)setBottomSettingView:;
- (void)setBottomSettingImageView:;
- (void)setTopSettingView:;
- (void)setTopSettingImageView:;
- (void)setTopSettingLabel:;
- (void)onVolumeChangeNotification;
- (BOOL)shouldMuteOrPause;
- (BOOL)clickVolumeKey;
- (void)setClickVolumeKey:;
- (id)backgroundControl;
- (void)setIgnoreLiveAutoPlay:;
- (BOOL)enableFixSetIsInSwitchPreviewPage;
- (BOOL)beginAppearanceTransitionIfNeed;
- (BOOL)shouldIgnorePause;
- (BOOL)isClickRefreshed;
- (void)restoreAndQuitWithoutAnimation;
- (void)trackExitHomepageViewIfNeeded;
- (BOOL)enableFixNavigationControllerPop;
- (void)handleLeavePreviewIssueForC2;
- (void)handleLeavePreviewIssueForHomepageHot;
- (void)refreshAndQuitWithType:;
- (void)restoreAndQuitWithAnimation;
- (void)setIsClickRefreshed:;
- (void)realRefreshWithType:;
- (id)getDoubleColumnChannelController;
- (BOOL)alreadyTrackExitHomepageView;
- (id)getRoomID:;
- (void)setAlreadyTrackExitHomepageView:;
- (id)currentRecommendFeedTableController;
- (void)setFeedTableVC:;
- (void)setC2VC:;
- (void)quitByHomepageButton;
- (BOOL)ignoreLiveAutoPlay;
- (void)setBackgroundControl:;
- (void)viewWillDisappear:;
- (long long)target;
- (id)collectionView;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (double)beginTime;
- (void)setIsExiting:;
- (void)setTarget:;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)preferredStatusBarStyle;
- (BOOL)isExiting;
- (void)setBeginTime:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (long long)source;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setSource:;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (void)restore;
- (id)backgroundImageView;
- (void)applicationWillResignActive;
- (void)setupUI;
- (BOOL)isCancel;
- (void)setIsCancel:;
- (void)setBackgroundImageView:;
- (void)backgroundAction;
- (id)customLayout;
- (void)setCustomLayout:;
- (BOOL)isMute;
- (double)lastTappedTime;
- (void)setLastTappedTime:;
- (id)refreshBlock;
- (void)setRefreshBlock:;
@end
