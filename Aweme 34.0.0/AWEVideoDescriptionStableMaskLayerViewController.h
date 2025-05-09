@interface AWEVideoDescriptionStableMaskLayerViewController : UIViewController
@property (nonatomic) UIPanGestureRecognizer panGesture;
@property (nonatomic) AWEVideoDescriptionMaskLayerViewModel viewModel;
@property (nonatomic) AWEFeedCollectionContainerViewController relatedContainer;
@property (nonatomic) BOOL isExitingMaskLayer;
@property (nonatomic) BOOL isApper;
@property (nonatomic) BOOL needToDismissAuto;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEFeedCollectionContainerContext maskLayerContext;
@property (nonatomic) AWEVideoDescriptionMaskNavigationBar navigationBar;
@property (nonatomic) UIView gradientView;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIView pureBackgroundView;
@property (nonatomic) UIView bottomMaskView;
@property (nonatomic) CAGradientLayer bottomMaskGradientLayer;
@property (nonatomic) UIButton circleCloseButton;
@property (nonatomic) BOOL isPlayingVideo;
@property (nonatomic) BOOL withinPlayingRegion;
@property (nonatomic) double contentOffsetY;
@property (nonatomic) BOOL hasRelatedItems;
@property (nonatomic) BOOL withinSuspendRegion;
@property (nonatomic) BOOL withinShowBackToFeedViewRegion;
@property (nonatomic) BOOL withinShowCirCleCloseButtonRegionInSingleMode;
@property (nonatomic) BOOL backToFeedViewAppearInProcess;
@property (nonatomic) BOOL backToFeedViewDisappearInProcess;
@property (nonatomic) BOOL hadClosedSuspendView;
@property (nonatomic) AWEVideoDescriptionMaskSuspendView suspendView;
@property (nonatomic) AWEVideoDescriptionMaskSuspendContainerView suspendContainerView;
@property (nonatomic) AWEVideoDescriptionStableMaskLayerBackToFeedView backToFeedView;
@property (nonatomic) UIImageView playerScreenShotImageView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} originPlayerFrame;
@property (nonatomic) BOOL originPlayerGradientBackgroundViewIsHidden;
@property (nonatomic) q firstPlayStatus;
@property (nonatomic) AWEBaseListSectionController headerSectionController;
@property (nonatomic) AWEBaseListSectionController loadingSectionController;
@property (nonatomic) AWEBaseListSectionController singleFeedCoverSectionController;
@property (nonatomic) AWEBaseListSectionController singleFeedCoverGuideSectionController;
@property (nonatomic) BOOL hasTrakcedReturnFeedShow;
@property (nonatomic) BOOL hasPushedToDetailVCInSingleMode;
@property (nonatomic) BOOL isShowSingleModeGuideAnimation;
@property (nonatomic) AWEAwemeModel trackAwemeModelForSingleMode;
@property (nonatomic) UIViewController<AWEDPlayerFeedViewControllerProtocol> playerViewController;
@property (nonatomic) @ interactionViewController;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> playInteractionContext;
@property (nonatomic) AWERelatedRecomendListDataController relatedRecommedDataController;
@property (nonatomic) <AWEVideoDescriptionMaskLayerDelegate> delegate;
@property (nonatomic) double enterTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)sectionControllerWillDisplay:;
- (void)detailTableViewControllerWillDisappear:currentAwemeModel:;
- (void)setReferString:;
- (void)setInteractionViewController:;
- (void)playerWillStartNextLoop:;
- (id)sectionViewModels;
- (double)enterTimestamp;
- (void)setEnterTimestamp:;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (id)relatedViewControllerForPrefetch;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (double)contentOffsetY;
- (void)setBottomMaskView:;
- (id)bottomMaskView;
- (void)appWillResignActiveNotification:;
- (void)setHeaderSectionController:;
- (void)setContentOffsetY:;
- (void)configPlayerViewController;
- (BOOL)isLandscapeVideo;
- (id)relatedRecommedDataController;
- (id)fullScreenDisplayContentRect;
- (void)updateWithModel:leftContainer:playVideoViewController:;
- (void)setRelatedRecommedDataController:;
- (void)exitVideoDescriptionMaskLayer:;
- (void)detailVCWillPopToFeed;
- (void)detailVCDidPopToFeed;
- (void)setupFeedCollectionContainerCollectionView:;
- (void)recognizePanGesture:;
- (long long)maskLayerStyle;
- (BOOL)hitReturnToFeedInList;
- (void)didReceiveExitVideoDescriptionMaskLayerNoti:;
- (void)setIsApper:;
- (void)setIsExitingMaskLayer:;
- (BOOL)needToDismissAuto;
- (void)showSubviews:animated:;
- (void)setNeedToDismissAuto:;
- (BOOL)isExitingMaskLayer;
- (void)trackShowMaskLayer;
- (BOOL)canTriggerExitBottomThreshold:;
- (BOOL)isApper;
- (double)bottomSafeAreaOffset;
- (Class)relatedRecommendSectionHeaderViewClass;
- (id)sizeForRelatedRecommendSectionHeaderWithCollectionViewSize:;
- (void)configRelatedRecommendSectionSupplementaryHeaderView:;
- (BOOL)canEnterSuspendView;
- (id)maskLayerContext;
- (long long)firstPlayStatus;
- (void)setFirstPlayStatus:;
- (BOOL)withinPlayingRegion;
- (BOOL)hadClosedSuspendView;
- (void)tryToPlayVideo;
- (BOOL)withinShowBackToFeedViewRegion;
- (void)handleBackToFeedViewAppear;
- (void)showGestureGuideViewIfNeed;
- (void)updateLongDescHasShowedGuideViewInSingleMode:;
- (void)tryToPauseVideo;
- (void)setupRelatedContainer;
- (void)setWithinPlayingRegion:;
- (void)setWithinShowCirCleCloseButtonRegionInSingleMode:;
- (id)suspendView;
- (void)setTrackAwemeModelForSingleMode:;
- (id)relatedContainer;
- (void)updateGradientView;
- (void)updateBottomMaskGradientLayer;
- (id)suspendContainerView;
- (id)backToFeedView;
- (id)circleCloseButton;
- (void)resetWithoutDataController;
- (void)setIsPlayingVideo:;
- (id)pureBackgroundView;
- (double)suspendContainerHorizontalOffset;
- (double)suspendContainerVerticalOffset;
- (double)navigationBarHeigth;
- (double)bottomSuspendContainerBoundaryOffset;
- (id)playerScreenShotImageView;
- (double)backToFeedViewBottom;
- (id)bottomMaskGradientLayer;
- (void)setWithinShowBackToFeedViewRegion:;
- (void)handleBackToFeedViewDisappearIfForce:;
- (BOOL)withinSuspendRegion;
- (void)setWithinSuspendRegion:;
- (void)handleSuspendViewAppear;
- (void)handleSuspendViewDisappear;
- (BOOL)withinShowCirCleCloseButtonRegionInSingleMode;
- (void)handelCloseButtonDisappearInSingleMode;
- (void)handleCloseButtonAppearInSingleMode;
- (double)singleCoverGuideTitleLableOffset;
- (double)supposedSuspendViewAbsoluteWidth;
- (double)supposedSuspendViewAbsoluteHeight;
- (id)supposedSuspendViewSize;
- (BOOL)backToFeedViewAppearInProcess;
- (void)setBackToFeedViewAppearInProcess:;
- (double)backToFeedViewAnimationDuration;
- (void)setBackToFeedViewDisappearInProcess:;
- (BOOL)hasTrakcedReturnFeedShow;
- (void)setHasTrakcedReturnFeedShow:;
- (void)trackReturnFeedShow;
- (BOOL)backToFeedViewDisappearInProcess;
- (BOOL)isBackToFeedViewShowing;
- (BOOL)canEnterSuspendViewFromExperiment;
- (void)replaceOriginPlayerWithSnapShot;
- (void)setOriginPlayerFrame:;
- (void)setOriginPlayerGradientBackgroundViewIsHidden:;
- (id)supposedPlayerContentViewFrame;
- (id)supposedPlayerFrame;
- (id)supposedSuspendViewFrame;
- (id)supposedSuspendViewContainerFrame;
- (void)trackToastWindowShow;
- (BOOL)originPlayerGradientBackgroundViewIsHidden;
- (id)originPlayerFrame;
- (void)showCircleCloseButton;
- (void)hideCircleCloseButton;
- (void)updatePlayStautsIfNeedInSingleMode:;
- (void)updateCloseButtonInSingleMode:;
- (void)updateSuspendViewWithContentOffsetY:;
- (void)updateNavigationBarWithContentOffsetY:;
- (void)updateBackToFeedViewWithContentOffsetY:;
- (void)updatePlayStautsIfNeed:;
- (void)updateBackgroundColorWithContentOffsetY:;
- (void)updateBottomMaskLayerWithContentOffsetY:;
- (id)singleFeedCoverSectionController;
- (BOOL)isShowSingleModeGuideAnimation;
- (void)showSingleModeGuideAnimationBack;
- (void)setIsShowSingleModeGuideAnimation:;
- (void)pushDetailVCInSingleMode;
- (void)scrollToSingleFeedCoverSectionOnTop;
- (void)trackRecommendGuideShowInSingleModeIfNeeded;
- (void)trackExitGuideShow;
- (void)setRelatedContainer:;
- (void)setPureBackgroundView:;
- (void)setMaskLayerContext:;
- (void)setHadClosedSuspendView:;
- (void)setHasPushedToDetailVCInSingleMode:;
- (BOOL)hasPushedToDetailVCInSingleMode;
- (void)trackRecommendClickInSingleMode;
- (BOOL)isNeededLongDesc;
- (void)setLoadingSectionController:;
- (void)setSingleFeedCoverSectionController:;
- (void)setSingleFeedCoverGuideSectionController:;
- (void)exitVideoDescriptionMaskLayerToFeedForNotChange;
- (void)afterPopToFeed;
- (id)trackAwemeModelForSingleMode;
- (void)showSingleModeGuideAnimation;
- (void)trackRecommendClientShowInSingleMode;
- (void)trackReturnFeedClick;
- (void)trackToastWindowClickWithMethod:;
- (void)circleCloseButtonPressed:;
- (void)setBottomMaskGradientLayer:;
- (void)setCircleCloseButton:;
- (BOOL)hasRelatedItems;
- (void)setHasRelatedItems:;
- (void)setSuspendView:;
- (void)setSuspendContainerView:;
- (void)setBackToFeedView:;
- (void)setPlayerScreenShotImageView:;
- (id)loadingSectionController;
- (id)singleFeedCoverGuideSectionController;
- (void)viewWillDisappear:;
- (id)navigationBar;
- (id)init;
- (void)dealloc;
- (id)gradientView;
- (id)delegate;
- (id)viewModel;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (long long)preferredStatusBarStyle;
- (void)scrollViewDidEndDecelerating:;
- (void)viewWillAppear:;
- (void)setViewModel:;
- (void)appDidBecomeActive:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)viewDidAppear:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)reset;
- (void)setDelegate:;
- (void)setNavigationBar:;
- (id)playerViewController;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)updateUI;
- (id)panGesture;
- (void)setPanGesture:;
- (void)setPlayerViewController:;
- (id)headerSectionController;
- (BOOL)isPlayingVideo;
- (id)interactionViewController;
@end
