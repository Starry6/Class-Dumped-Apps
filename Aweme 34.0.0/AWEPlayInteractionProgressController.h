@interface AWEPlayInteractionProgressController : AWEPlayInteractionNewBaseController
@property (nonatomic) AWEFeedProgressContext progressContext;
@property (nonatomic) <AWEFeedProgressTrackerProtocol> tracker;
@property (nonatomic) double sliderValue;
@property (nonatomic) UILabel progressLeftLabel;
@property (nonatomic) UILabel progressRightLabel;
@property (nonatomic) BOOL progressSliderConfirmed;
@property (nonatomic) q slidingTime;
@property (nonatomic) BOOL needUpdateSliderFrame;
@property (nonatomic) BOOL hasUpdatedSliderFrame;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isShowThumbnail;
@property (nonatomic) BOOL isGetThumbnail;
@property (nonatomic) BOOL isRequestThumbnail;
@property (nonatomic) BOOL willWindowPanStart;
@property (nonatomic) AWEMaskWindow maskWindow;
@property (nonatomic) BDImageView previewImageView;
@property (nonatomic) AWEProgressPreviewSlider previewSlider;
@property (nonatomic) UIImageView lineImageView;
@property (nonatomic) AWEBigThumbModel dashThumbModel;
@property (nonatomic) UIImage engineBigImage;
@property (nonatomic) BOOL requestBigThumb;
@property (nonatomic) NSMutableDictionary engineBigImageDict;
@property (nonatomic) NSMutableDictionary requestBigThumbDict;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} sliderInSelfViewFrame;
@property (nonatomic) UIPanGestureRecognizer panGesture;
@property (nonatomic) AWEFakeProgressSliderView fakeProgressSlider;
@property (nonatomic) AWEProgressChapterCollectionView chapterCollectionView;
@property (nonatomic) CALayer chapterLoopProgressLayer;
@property (nonatomic) CALayer chapterLoopProgressBackgroundLayer;
@property (nonatomic) UIView fakeChapterLoopProgressView;
@property (nonatomic) UIView fakeChapterLoopProgressBackgroundView;
@property (nonatomic) AWEProgressChapterController chapterController;
@property (nonatomic) NSArray chapterArray;
@property (nonatomic) UIView forbidTwoFingerView;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL enableSeekOptimize;
@property (nonatomic) BOOL clipSeekDisplayed;
@property (nonatomic) double lastSeekTime;
@property (nonatomic) BOOL needSliderStrongState;
@property (nonatomic) double hotStartProgress;
@property (nonatomic) AWEPlayInteractionProgressContainerView progressContainerView;
@property (nonatomic) @? updateProgressSliderHandler;
@property (nonatomic) double lastWidth;
@property (nonatomic) <AWEPadKeyboardProgressControlProtocol> padKeyboradProgressControl;
@property (nonatomic) Q animationOptions;
@property (nonatomic) UIView<AWEFeedProgressSliderProtocol> progressSlider;
@property (nonatomic) AWEProgressPlayBackSlider playBackSlider;
@property (nonatomic) CADisplayLink progressBackDisplayLink;
@property (nonatomic) {CGPoint=dd} lastPosition;
@property (nonatomic) {CGPoint=dd} lastFakePosition;
@property (nonatomic) NSNumber adsorbValue;
@property (nonatomic) {CGPoint=dd} cancelFakePosition;
@property (nonatomic) double lastTime;
@property (nonatomic) BOOL isAdsorb;
@property (nonatomic) BOOL isDragSlow;
@property (nonatomic) BOOL isAdsorbShaked;
@property (nonatomic) double progressSliderTouchStartTime;
@property (nonatomic) double bottomBarHeigth;
@property (nonatomic) NSArray progressAlphaInfo;
@property (nonatomic) q alphaType;
@property (nonatomic) NSNumber originalProgressBarAlpha;
@property (nonatomic) BOOL shouldWakeupFromRevisitVideo;
@property (nonatomic) double revisitVideoTimeinterval;
@property (nonatomic) NSString revisitVideoTimeRelayFrom;
@property (nonatomic) BOOL isRevisitVideoStrongState;
@property (nonatomic) DUXPopover revisitVideoPopover;
@property (nonatomic) BOOL shouldWakeupFromLVideoHighLightStartPlay;
@property (nonatomic) DUXPopover lvideoHighLightStartPlayPopover;
@property (nonatomic) BOOL isLVideoHighLightStartPlayStrongState;
@property (nonatomic) double LVideoHighLightStartPlayTimeInterval;
@property (nonatomic) double LVideoHighLightPopoverShowTime;
@property (nonatomic) BOOL shouldWakeupFromWatchVideoLater;
@property (nonatomic) double watchVideoLaterTimeInterval;
@property (nonatomic) BOOL isWatchVideoLaterStrongState;
@property (nonatomic) DUXPopover watchVideoLaterPopover;
@property (nonatomic) BOOL isPlayerPauseState;
@property (nonatomic) BOOL disableSeekTime;
@property (nonatomic) Q clearType;
@property (nonatomic) AWEProgressPauseTimeLabelView pauseTimeLabel;
@property (nonatomic) AWEProgressPauseSpeedView pauseSpeedLabel;
@property (nonatomic) AWEProgressPauseBackView pauseBackView;
@property (nonatomic) UIView gestureBlockingView;
@property (nonatomic) UIPanGestureRecognizer blockingViewPanGesture;
@property (nonatomic) BOOL willLongPressSpeed;
@property (nonatomic) double v5StayDuration;
@property (nonatomic) BOOL hasChangeChapter;
@property (nonatomic) double moveUpProgressViewOffset;
@property (nonatomic) BOOL updateByInteractionMode;
@property (nonatomic) double currentProgressViewOffset;
@property (nonatomic) NSString progressTouchType;
@property (nonatomic) BOOL isUserInteractionEnabledDisabled;
@property (nonatomic) BOOL isFromThumbPoint;
@property (nonatomic) BOOL shouldDisablePreview;
@property (nonatomic) UILabel fineAdjustmentLabel;
@property (nonatomic) BOOL isFineAdjustmentMode;
@property (nonatomic) BOOL isPreviewEnlarged;
@property (nonatomic) {CGPoint=dd} beginLocation;
@property (nonatomic) double lastSliderValue;
@property (nonatomic) double lastMapSliderValue;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) q displayLinkCallTimes;
@property (nonatomic) Q previewType;
@property (nonatomic) {CGPoint=dd} touchendLocation;
@property (nonatomic) NSMutableArray sliderValueArray;
@property (nonatomic) {CGPoint=dd} gestureChangeLocation;
@property (nonatomic) {CGPoint=dd} slideUpBeginLoaction;
@property (nonatomic) double xOffset;
@property (nonatomic) double yOffset;
@property (nonatomic) double sliderOldAlpha;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL progressUseAnimation;
@property (nonatomic) double lastProgressDuration;
@property (nonatomic) BOOL enableHotSoonVideoResultCache;
@property (nonatomic) BOOL isHotSoonVideoResult;
@property (nonatomic) AWEGradientView gradientBackgroundView;
@property (nonatomic) BOOL isEnteringRefineFrameSelectionMode;
@property (nonatomic) BOOL isExitingRefineFrameSelectionMode;
@property (nonatomic) BOOL isFirstEnterRefinedFrameSelection;
@property (nonatomic) BOOL isFrameSelectionCollectionViewScrolling;
@property (nonatomic) BOOL isFrameSelectionCollectionDidSelect;
@property (nonatomic) BOOL needRestLongPressDelegate;
@property (nonatomic) BOOL needHandleSliderPanGesture;
@property (nonatomic) BOOL needHandleExitPanGesture;
@property (nonatomic) BOOL isReloadInRefineFrame;
@property (nonatomic) <AWEMaskWindowLongPressGestureDelegate> lastLongPressDelegate;
@property (nonatomic) UICollectionView frameSelectionCollectionView;
@property (nonatomic) UIView frameSelectionCollectionRootView;
@property (nonatomic) UIView frameSelectionContainerView;
@property (nonatomic) UIView frameVerticalLineView;
@property (nonatomic) {CGPoint=dd} originSlideUpBeginLocation;
@property (nonatomic) {CGPoint=dd} lastSlideUpChangeLocation;
@property (nonatomic) {CGPoint=dd} originSliderPoint;
@property (nonatomic) double originFakeProgressSliderBottomY;
@property (nonatomic) double originProgressSliderBottomY;
@property (nonatomic) {CGPoint=dd} frameSelectionCollectionViewLastContentOffset;
@property (nonatomic) NSMutableArray chapterPointThumbIndexArray;
@property (nonatomic) UIImageView playButtonView;
@property (nonatomic) NSMutableDictionary thumbCellConfigBlockDic;
@property (nonatomic) UICollectionViewCell frameSelectionCell;
@property (nonatomic) double frameSelectionEnterTime;
@property (nonatomic) NSNumber frameSelectionStartMoment;
@property (nonatomic) NSString frameSelectionExitMethod;
@property (nonatomic) @? lastGestureShouldBeginBlock;
@property (nonatomic) BOOL progressSliderShouldHidden;
@property (nonatomic) double progressSliderGridMargin;
@property (nonatomic) q shareVideoStartTimeInterval;
@property (nonatomic) BOOL isShareVideoStrongState;
@property (nonatomic) DUXPopover shareVideoPopover;
@property (nonatomic) NSNumber lastLoadAndVolumeViewHidden;
@property (nonatomic) UILabel playTimeLabel;
@property (nonatomic) UILabel totalTimeLabel;
@property (nonatomic) BOOL isProgressSliderStrongState;
@property (nonatomic) AWELoadingAndVolumeView loadAndVolumeView;
@property (nonatomic) UIView loadAndVolumeViewSuperView;
@property (nonatomic) double lastPlayDuration;
@property (nonatomic) UIView<AWEReplaceMusicReportViewProtocol> replaceMusicView;
@property (nonatomic) UIView progressSliderUnderView;
@property (nonatomic) UIView progressLabelView;
@property (nonatomic) BOOL slidingBarWakeup;
@property (nonatomic) BOOL isHotSearchStatus;
@property (nonatomic) BOOL isBottomHotBarShowing;
@property (nonatomic) UIView hotPointDividerLine;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) UIView hotPointDot;
@property (nonatomic) UIView previewStartDot;
@property (nonatomic) UIView previewEndDot;
@property (nonatomic) UIView fakePreviewStartDot;
@property (nonatomic) UIView fakePreviewEndDot;
@property (nonatomic) UIView playStartDot;
@property (nonatomic) UIView fakePlayStartDot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isRefineFrameSelectionMode;
- (id)formatTimeFromSeconds:;
- (void)updateProgressSliderWithTime:totalDuration:;
- (void)popoverDidDisappear:;
- (void)setHide:;
- (id)aAWEPadModuleAdapter;
- (long long)playProgressThreshold;
- (BOOL)isHotSearchStatus;
- (void)setIsHotSearchStatus:;
- (BOOL)isBottomHotBarShowing;
- (void)setIsBottomHotBarShowing:;
- (BOOL)isNeedHiddenProgressSliderUnderView;
- (void)setGradientBackgroundView:;
- (id)hotPointDividerLine;
- (void)setHotPointDividerLine:;
- (double)p_stackContainerViewBottomOffset;
- (void)playLoadingAnimation;
- (void)updateAllSubViews;
- (void)addLoadAndVolumeViewForShow;
- (void)setloadAndVolumeViewHidden:;
- (void)removeLoadAndVolumeViewForHidden;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (void)removeControllerFromSuperView;
- (void)viewDidChangeBreakPoint;
- (void)splitStatusChanged;
- (BOOL)willWindowPanStart;
- (void)setWillWindowPanStart:;
- (void)handleMaskWindowDelegate;
- (void)resetMaskWindowDelegate;
- (BOOL)isShowingPanels;
- (id)totalTimeLabel;
- (void)progressSliderTouchBegan:;
- (void)progressSliderValueChanged:;
- (void)progressSliderTouchEnded:;
- (void)setTotalTimeLabel:;
- (void)setContainerHidden:;
- (long long)slidingTime;
- (void)setSlidingTime:;
- (void)setLastSeekTime:;
- (double)lastSeekTime;
- (id)playTimeLabel;
- (void)setPlayTimeLabel:;
- (void)screenCapturedDidChange:;
- (BOOL)shouldAdjustFullScreenCellDisplay;
- (id)windowGestureHitTestViewFromView:point:withEvent:;
- (BOOL)windowGestureShouldRecognizedFromView:withPoint:;
- (BOOL)windowGestureRecognizerShouldBegin:;
- (BOOL)windowGestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)windowGestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)windowGestureTriggered:;
- (void)trackProgressDelegateDifferent:params:;
- (id)aAWEBrandColorAdapter;
- (id)lineImageView;
- (void)setLineImageView:;
- (id)currentInfoForSubUnits;
- (void)setEnableTTPlayer:;
- (void)setEnableSeekOptimize:;
- (BOOL)enableTTPlayer;
- (BOOL)enableSeekOptimize;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEPlayInteractionAdapter;
- (void)setupEvent;
- (void)setAlphaType:;
- (long long)alphaType;
- (void)setIsSliding:;
- (BOOL)isSliding;
- (id)dashThumbInfo;
- (void)setDashThumbModel:;
- (id)dashThumbModel;
- (BOOL)useCommonThumbnailLogic;
- (id)engineBigImage;
- (BOOL)requestBigThumb;
- (void)setRequestBigThumb:;
- (void)setEngineBigImage:;
- (void)getVideoPreviewImageIndex:completion:;
- (id)framePreviewImageForProgress:totalDuration:originalImage:;
- (id)progressLabelView;
- (id)progressLeftLabel;
- (id)progressRightLabel;
- (void)setProgressLabelView:;
- (void)setProgressLeftLabel:;
- (void)setProgressRightLabel:;
- (void)handleAppWillResignActiveNotification;
- (id)aAWEMainModuleServiceDOUYINHTSAdaper;
- (BOOL)isRefineFrameSelectionMode;
- (BOOL)isPaidMixScreenRecording;
- (id)maskWindow;
- (void)setMaskWindow:;
- (void)refreshPreviewImage;
- (void)tryConsumeGesture;
- (void)updateProgressSliderToNormal;
- (id)progressContainerView;
- (void)setProgressContainerView:;
- (BOOL)isChapterStyle;
- (BOOL)hasVideoAbstract;
- (BOOL)isHighLightStyle;
- (void)chapterLoopStatusChanged;
- (id)chapterController;
- (void)setChapterController:;
- (BOOL)avoidSearchVideoSectionWithScene:;
- (unsigned long long)sentenceStyle;
- (void)setLastPlayDuration:;
- (double)lastPlayDuration;
- (void)updatePaginatedProgressWithIndex:progress:duration:animated:;
- (void)showPreviewByCommonLogicIfNeeded;
- (id)chapterCollectionView;
- (void)setupPreviewSliderLayout;
- (BOOL)isChapterLoop;
- (id)sliderThemeColor;
- (void)removeChapterView;
- (void)setChapterCollectionView:;
- (void)closeChapterLoop;
- (double)realSliderValueWithChapterSlider:;
- (void)updatePreviewSlider;
- (BOOL)shouldShowPreviewSlider;
- (id)previewSlider;
- (void)setPreviewSlider:;
- (void)checkFrequency;
- (void)progressSliderPanGesture:;
- (id)hintLabelStringWithTime:;
- (void)registerPadKeyboardBindings;
- (BOOL)isSlidingAd;
- (BOOL)seekOffset:completion:;
- (BOOL)isPlayerOnScreen;
- (void)addKeyForUpdateProgressSlider;
- (void)removeKeyForUpdateProgressSlider;
- (void)setShouldDisablePreview:;
- (double)progressViewReservedMaxHeightWithBottomContainerShowed:;
- (id)padKeyboradProgressControl;
- (void)setPadKeyboradProgressControl:;
- (void)scrollToCurrentCell:;
- (id)engineBigImageDict;
- (id)requestBigThumbDict;
- (void)setEngineBigImageDict:;
- (void)setRequestBigThumbDict:;
- (BOOL)isNewThumbnailData;
- (id)getThumbnailImgUrlByModel:index:;
- (id)gestureBlockingView;
- (void)setGestureBlockingView:;
- (BOOL)enableNewThumbnailLogic;
- (id)fakeProgressSlider;
- (void)addFakeProgressSliderIfNeeds;
- (void)remakePadFakeSliderViewConstraint;
- (id)strongDefaultThumbImage;
- (id)defaultThumbImage;
- (void)showFakeSliderIfNeeded;
- (void)setFakeProgressSlider:;
- (void)updatePlayProgressWithTime:totalDuration:;
- (void)didReceiveFeedTableNewAwemePlayNotice;
- (void)handleSetPureModeNotification:;
- (void)outerPointShouldHandleLongPress:;
- (void)outerPointShouldHandleLongPressWithResult:;
- (void)showReplaceMusicPanel;
- (void)updateProgressLoading:;
- (void)setPlayProgressWithTime:totalDuration:;
- (void)updateSliderPositonByAntiBarAnimationBegin:;
- (void)removeProgressForHidden;
- (void)setClipSeekDisplayed:;
- (void)setNeedSliderStrongState:;
- (void)setShouldWakeupFromRevisitVideo:;
- (void)setRevisitVideoTimeinterval:;
- (void)wakeUpSliderFromRevisitVideo;
- (void)setRevisitVideoTimeRelayFrom:;
- (void)setShouldWakeupFromWatchVideoLater:;
- (void)setWatchVideoLaterTimeInterval:;
- (void)setShouldWakeupFromLVideoHighLightStartPlay:;
- (void)setLVideoHighLightStartPlayTimeInterval:;
- (void)setShareVideoStartTimeInterval:;
- (void)setSlidingBarWakeup:;
- (void)updateProgressSliderToWakeup;
- (void)updateChapterSlider;
- (void)setUpdateByInteractionMode:;
- (void)updateProgressSlider;
- (id)revisitVideoPopover;
- (void)setRevisitVideoPopover:;
- (id)lvideoHighLightStartPlayPopover;
- (void)setLvideoHighLightStartPlayPopover:;
- (id)shareVideoPopover;
- (void)setShareVideoPopover:;
- (void)setCurrentProgressViewOffset:;
- (void)setSliderOldAlpha:;
- (double)currentProgressViewOffset;
- (void)setMoveUpProgressViewOffset:;
- (BOOL)readyForProgressPanGesture:;
- (void)handleProgressSliderPanGestureBegan;
- (void)setProgressUseAnimation:;
- (void)setDisableSeekTime:;
- (id)progressSliderUnderView;
- (void)setProgressUnderViewColor;
- (void)setIsUserInteractionEnabledDisabled:;
- (BOOL)isUserInteractionEnabledDisabled;
- (id)loadAndVolumeView;
- (id)hotPointDot;
- (id)previewStartDot;
- (id)previewEndDot;
- (id)playStartDot;
- (void)bringProgressSliderToFront;
- (BOOL)progressSliderAlwaysShowed;
- (id)fineAdjustmentLabel;
- (void)setHotStartProgress:;
- (void)setBottomBarHeigth:;
- (void)setClearType:;
- (void)addViewsToContainer;
- (id)replaceMusicView;
- (double)posAdjustY;
- (double)sliderYOffset;
- (void)setProgressSliderGridMargin:;
- (double)progressSliderGridMargin;
- (void)updateLabelViewToPreviewStyle;
- (BOOL)enableOptPreviewSlider;
- (BOOL)shouldEnlargePreview;
- (void)targetViewDidLoad;
- (void)setEnableHotSoonVideoResultCache:;
- (BOOL)enableHotSoonVideoResultCache;
- (BOOL)isHotSoonVideo;
- (void)setIsHotSoonVideoResult:;
- (void)setSlideUpBeginLoaction:;
- (void)setGestureChangeLocation:;
- (void)setLastSlideUpChangeLocation:;
- (void)setIsReloadInRefineFrame:;
- (void)setIsShowThumbnail:;
- (void)setIsGetThumbnail:;
- (void)setIsRequestThumbnail:;
- (void)setLastGestureShouldBeginBlock:;
- (void)showReplaceMusicPanelIfNeeded;
- (void)setAlphaInfo;
- (void)updateHotPointDividerLine;
- (void)traceSliderMonitorWithModel:;
- (void)setDisplayLinkCallTimes:;
- (void)setSliderValueArray:;
- (void)updatePreviewLayoutIfNeeded;
- (void)showPreviewDotIfNeeded;
- (void)showPlayStartDotIfNeeded;
- (void)setChapterPointThumbIndexArray:;
- (void)openChapterLoopIfNeed;
- (void)bindLoadAndVolumWithProgress;
- (void)updateLoadingViewFrameIfNeeded;
- (void)updateRefinedFrameSelection;
- (void)trackErrorThumbnail;
- (BOOL)shouldForbiddenShowPreview;
- (id)getThumbModel;
- (long long)getProgressThumbIndex;
- (BOOL)isGetThumbnail;
- (void)playLoadingAnimationAfterFeedReadyDelay;
- (void)handlePlayLoadingAnimation;
- (BOOL)shouldHideProgressSlider;
- (void)setProgressSliderShouldHidden:;
- (void)showHotPointDotIfNeeded;
- (void)setIsPlayerPauseState:;
- (BOOL)slidingBarWakeup;
- (id)progressSliderWakeUpFrame;
- (BOOL)needUpdateSliderFrame;
- (void)setHasUpdatedSliderFrame:;
- (void)progressSliderChangedWithValue:;
- (BOOL)updateByInteractionMode;
- (BOOL)hasUpdatedSliderFrame;
- (void)setNeedUpdateSliderFrame:;
- (BOOL)progerssSliderInteractionEnabledWithDouPlus;
- (void)checkIfBottmoBarHeightChangeAndReset;
- (void)updateChapterPointWithPlayTime:;
- (BOOL)isFrameSelectionCollectionViewScrolling;
- (BOOL)needSliderStrongState;
- (void)updateProgressSliderStateToStrongIfNeeded;
- (void)updateChapterLoopLayerLayoutIfNeedWithAnimated:animatedDuration:;
- (BOOL)enableSeekBarTrackProgress;
- (id)playBackSlider;
- (void)closeChapterLoopIfNeedWithPlayTime:closeType:;
- (void)updateFakeChapterLoopProgress;
- (BOOL)shouldShowPreviewDots;
- (id)fakePreviewStartDot;
- (id)fakePreviewEndDot;
- (void)updatePreviewDotToDraggingState:;
- (id)fakePlayStartDot;
- (void)updatePlayStartDotToDraggingState:;
- (long long)shareVideoStartTimeInterval;
- (void)updateChapterViewLayout;
- (void)setLoadAndVolumeViewSuperView:;
- (id)loadAndVolumeViewSuperView;
- (void)setProgressTouchType:;
- (void)setIsFromThumbPoint:;
- (void)setForbidTwoFingerView:;
- (void)setIsAdsorb:;
- (void)setIsAdsorbShaked:;
- (void)setIsDragSlow:;
- (void)setLastFakePosition:;
- (void)setCancelFakePosition:;
- (void)closeChapterLoopWithCloseType:;
- (void)setV5StayDuration:;
- (void)setWillLongPressSpeed:;
- (void)setProgressSliderTouchStartTime:;
- (void)setProgressAlphaInfo:;
- (void)setOriginalProgressBarAlpha:;
- (id)watchVideoLaterPopover;
- (void)setWatchVideoLaterPopover:;
- (void)setIsRevisitVideoStrongState:;
- (void)setIsFineAdjustmentMode:;
- (void)setIsPreviewEnlarged:;
- (void)setBeginLocation:;
- (void)setLastSliderValue:;
- (void)setLastMapSliderValue:;
- (void)setTouchendLocation:;
- (void)hiddenGradientBackgroundView;
- (void)setOriginSlideUpBeginLocation:;
- (void)setThumbCellConfigBlockDic:;
- (BOOL)isEnteringRefineFrameSelectionMode;
- (void)quitRefinedFrameSelectionModeByEnd:exitMethod:isChangePage:;
- (void)setIsShareVideoStrongState:;
- (id)forbidTwoFingerView;
- (void)setLastLoadAndVolumeViewHidden:;
- (BOOL)progressSliderConfirmed;
- (void)confirmProgressSliderUI;
- (void)setProgressSliderConfirmed:;
- (BOOL)enableFixProgressHotZone;
- (id)lastLoadAndVolumeViewHidden;
- (BOOL)isInTopVC;
- (void)wakeUpSliderFromShareVideo;
- (BOOL)shouldWakeupFromRevisitVideo;
- (BOOL)shouldWakeupFromWatchVideoLater;
- (void)wakeUpSliderFromWatchVideoLater;
- (BOOL)shouldWakeupFromLVideoHighLightStartPlay;
- (void)wakeUpSliderFromLVideoHighLightStartPlay;
- (void)progressSliderValueChanged:withEvent:;
- (BOOL)disableSeekTime;
- (id)beginLocation;
- (id)gestureChangeLocation;
- (void)enterFineAdjustmentModeWithMethod:;
- (id)originSlideUpBeginLocation;
- (BOOL)isSlideUpWithCurrentLocation:beginLocation:;
- (void)enterRefinedFrameSelectionModeWithHeight:;
- (BOOL)shouldEnterFineAdjustmentMode;
- (BOOL)shouldEnterRefinedFrameSelectionMode;
- (void)scrollToCurrentCell;
- (void)checkRealProgressDistance;
- (BOOL)isFrameSelectionCollectionDidSelect;
- (BOOL)isAdsorb;
- (BOOL)isFineAdjustmentMode;
- (double)lastSliderValue;
- (void)timerPure;
- (void)handleV3RelatedView;
- (void)showChapterCollectionView;
- (void)newShowPreviewIfNeeded;
- (void)showPreviewIfNeeded;
- (void)showGradientBackgroundView;
- (void)progressSliderTouchBegan:withEvent:;
- (id)progressSliderUnderViewFrame;
- (void)updatePlayBackSlider;
- (void)setupChapterCollectionView;
- (void)updateSliderAndUnderViewConstraintIfNeed;
- (void)updateFineAdjustmentLabel;
- (void)trackAdjustmentLabelShow;
- (void)updateRefinedFrameSelectionLabel;
- (BOOL)shouldChangeRefineFrame;
- (void)setupRefinedFrameSelectionLayoutIfNeeded;
- (BOOL)isReloadInRefineFrame;
- (id)frameSelectionCollectionView;
- (void)updateSliderEndedFakeSliderProgress;
- (void)progressSliderTouchEnded:withEvent:;
- (void)progressSliderTouchEnded:withEvent:seekCompletion:;
- (double)lastMapSliderValue;
- (void)restoreToNormalWhenTouchEnd:;
- (id)touchendLocation;
- (void)quitFineAdjustmentMode;
- (void)setIsExitingRefineFrameSelectionMode:;
- (void)cancelDisplayLink;
- (BOOL)p_isBugfixSlidingFeed;
- (void)releaseAdsorb;
- (BOOL)clipSeekDisplayed;
- (unsigned long long)clearType;
- (double)progressSliderTouchStartTime;
- (BOOL)isFirstEnterRefinedFrameSelection;
- (void)setFrameSelectionStartMoment:;
- (void)setFrameSelectionEnterTime:;
- (void)trackEnterRefineFrameSelectionWithStartMoment:;
- (id)progressTouchType;
- (BOOL)isFromThumbPoint;
- (void)setIsFirstEnterRefinedFrameSelection:;
- (void)updateChapterProgressPanEndWithSeekTime:;
- (void)cancelProgressBackDisplayLink;
- (unsigned long long)progressSliderAnimationOptions;
- (BOOL)shouldRaiseUpPreview;
- (BOOL)shouldHideThumbVidw;
- (void)updateChapterLoopFakeProgressCornerRadiusWithHeight:;
- (id)originalProgressBarAlpha;
- (void)setIsFrameSelectionCollectionViewScrolling:;
- (void)setIsFrameSelectionCollectionDidSelect:;
- (id)slideUpBeginLoaction;
- (BOOL)isExitingRefineFrameSelectionMode;
- (id)frameSelectionContainerView;
- (void)setUpdateProgressSliderHandler:;
- (id)updateProgressSliderHandler;
- (void)updateProgressSliderPositionIfNeeded;
- (id)blockingViewPanGesture;
- (void)resetLongPressDelegateIfNeed;
- (void)updateLabelViewToPureTextStyle;
- (BOOL)contextIsDisplaying;
- (void)handleLongPressDelegateIfNeed;
- (BOOL)isAdsorbShaked;
- (void)addPlayBackSliderIfNeeded;
- (void)addProgressBackDisplayLink;
- (void)addFakePreviewDotIfNeed;
- (void)addFakePlayStartDotIfNeed;
- (BOOL)shouldDisablePreview;
- (BOOL)isPreviewEnlarged;
- (void)enlargePreview;
- (void)loadPreviewWhenShow:completion:;
- (void)updateChapterCollectionViewLayoutIfNeeded;
- (double)getThumbImageInterval;
- (id)chapterPointThumbIndexArray;
- (BOOL)shouldShowProgressThumbnail;
- (BOOL)isRequestThumbnail;
- (void)trackGetThumbnailWithError:duration:;
- (void)refreshPreviewImageWithBigImage:isFromCache:;
- (BOOL)isShowThumbnail;
- (void)newRefreshPreviewImage:;
- (id)targetEngineBigImage;
- (void)newLoadPreviewWhenShow:completion:;
- (void)newGetVideoPreviewImageIndex:completion:;
- (id)newFramePreviewImageForProgress:totalDuration:originalImage:;
- (BOOL)needHandleSliderPanGesture;
- (void)quitRefinedFrameSelectionModeWithHeight:;
- (void)setNeedHandleExitPanGesture:;
- (void)setNeedHandleSliderPanGesture:;
- (BOOL)needHandleExitPanGesture;
- (id)frameSelectionCollectionRootView;
- (id)progressSliderNormalFrame;
- (BOOL)viewShouldNotHandleGesture:;
- (id)windowsGestureAimList;
- (id)scrollViewDelegateClassArray;
- (id)interactionModeProgressFrame;
- (double)progressSliderLeftRightArea;
- (double)moveUpProgressViewOffset;
- (BOOL)shouldTransparentProgressSliderOnStableState;
- (BOOL)progressSliderShouldHidden;
- (void)setReplaceMusicView:;
- (double)timeLabelOriginY;
- (double)sliderStrongStateThemeColorAlpha;
- (BOOL)progressV4NeedUnderViewBackgroundColorBlack;
- (void)updateProgressSliderToStrongState;
- (void)updateProgressSliderUnderView;
- (void)setIsProgressSliderStrongState:;
- (double)bottomBarHeigth;
- (void)chapterProgressToStrongState;
- (void)updatePlayTotalTimeLabel;
- (void)updateHotPointDotToStrongState;
- (void)updatePreviewDotToStrongState;
- (void)updatePlayStartDotToStrongState;
- (void)updatePointViewToStrongState:;
- (void)updateChapterLoopProgressLayout;
- (id)chapterLoopProgressBackgroundLayer;
- (void)updateChapterLoopProgressCornerRadius;
- (void)updatePointViewToNormalState:;
- (double)revisitVideoTimeinterval;
- (BOOL)isPlayerPauseState;
- (BOOL)isRevisitVideoStrongState;
- (BOOL)shouldUpdateProgressSliderToNormal;
- (BOOL)isShareVideoStrongState;
- (void)updateProgressSliderToStableState;
- (void)chapterProgressToNormalState;
- (void)hideTimeLabelAndSpeedLabel;
- (id)iconImageWithProgressAlphaTest;
- (id)progressAlpha;
- (void)updateHotPointDotToStableState;
- (void)updatePreviewDotToStableState;
- (void)updatePlayStartDotToStableState;
- (void)updateHotPointDotState;
- (double)hotStartProgress;
- (void)updatePreviewDotState;
- (void)updateFakePreviewDotState;
- (void)updatePlayStartDotState;
- (void)updateFakePlayStartDotState;
- (void)handlePause:;
- (void)padUpdateProgressSliderStateToStrongIfNeeded;
- (long long)getVideoAlphaType;
- (id)progressAlphaInfo;
- (void)showChangeSpeedToast:;
- (id)pauseTimeLabel;
- (id)pauseSpeedLabel;
- (void)handlePausePanGesture;
- (void)handleSingleTapGesture;
- (double)sliderOldAlpha;
- (void)trackRevisitVideoReplay:;
- (id)hintPopOver:withPlayTime:;
- (void)trackContinueToastShow:;
- (id)revisitVideoTimeRelayFrom;
- (BOOL)isHotSoonVideoResult;
- (BOOL)longPressGestureShouldBegin:;
- (BOOL)tabBarButtonEnable:;
- (id)longPressGuetureNeedFailedArray;
- (void)shrinkPreview;
- (long long)displayLinkCallTimes;
- (id)sliderValueArray;
- (double)watchVideoLaterTimeInterval;
- (void)setIsWatchVideoLaterStrongState:;
- (void)setIsLVideoHighLightStartPlayStrongState:;
- (double)LVideoHighLightStartPlayTimeInterval;
- (void)setLVideoHighLightPopoverShowTime:;
- (double)LVideoHighLightPopoverShowTime;
- (void)setIsEnteringRefineFrameSelectionMode:;
- (void)setIsRefineFrameSelectionMode:;
- (void)setNeedRestLongPressDelegate:;
- (void)setLastLongPressDelegate:;
- (void)disableFullPageTransition;
- (void)updateRefinedFrameSelectionWithHeight:isQuit:;
- (id)lastGestureShouldBeginBlock;
- (double)getCurrentCellTime;
- (id)frameSelectionStartMoment;
- (void)trackExitRefineFrameSelectionWithStartMoment:endMoment:exitMethod:;
- (void)setFrameSelectionExitMethod:;
- (id)playButtonView;
- (id)frameVerticalLineView;
- (id)originSliderPoint;
- (void)setOriginSliderPoint:;
- (double)originFakeProgressSliderBottomY;
- (double)originProgressSliderBottomY;
- (void)setAllPureMode:;
- (void)setOriginProgressSliderBottomY:;
- (void)setOriginFakeProgressSliderBottomY:;
- (BOOL)needRestLongPressDelegate;
- (id)lastLongPressDelegate;
- (void)resumeFullPageTransition;
- (id)lastSlideUpChangeLocation;
- (long long)getProgressThumbOrder;
- (id)frameSelectionCell;
- (void)setFrameSelectionCell:;
- (long long)getTotalThumbImageCount;
- (BOOL)isChapterFrame:;
- (id)frameSelectionCollectionViewLastContentOffset;
- (void)setFrameSelectionCollectionViewLastContentOffset:;
- (id)configCellForCommonThumbnailLogicWithIndexPath:;
- (id)configCellForNewThumbnailLogicWithIndexPath:;
- (id)thumbCellConfigBlockDic;
- (void)addThumbCellConfigBlockWithKey:value:;
- (void)setProgressBackDisplayLink:;
- (id)progressBackDisplayLink;
- (id)lastFakePosition;
- (id)cancelFakePosition;
- (BOOL)isDragSlow;
- (void)updateProgressTimeLeftLabel;
- (void)setAdsorbValue:;
- (id)adsorbValue;
- (double)frameSelectionEnterTime;
- (id)chapterLoopProgressLayer;
- (void)setChapterLoopProgressLayer:;
- (void)setChapterLoopProgressBackgroundLayer:;
- (id)fakeChapterLoopProgressView;
- (id)fakeChapterLoopProgressBackgroundView;
- (void)setFakeChapterLoopProgressView:;
- (void)setFakeChapterLoopProgressBackgroundView:;
- (void)updateProgressSliderMinMaxTintColor;
- (void)updateFakeProgressSliderMinMaxTintColor;
- (void)updateChapterLoopLayerLayoutIfNeedWithPlayTime:animated:animatedDuration:;
- (BOOL)isProgressSliderStrongState;
- (void)windowLongPressGestureTriggered:;
- (BOOL)windowLongPressGestureRecognizerShouldBegin:;
- (BOOL)windowLongPressGestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)windowLongPressGestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)windowTapGestureTriggered:;
- (BOOL)windowTapGestureRecognizerShouldBegin:;
- (BOOL)windowTapGestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)windowTapGestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)feedProgressSliderBeginChange:;
- (void)feedProgressSliderChanged:;
- (void)feedProgressSliderEndChange:;
- (void)changeUnderProgressViewColor:;
- (void)delayRestoreToNormal:;
- (void)showNewStyleProgressSlider;
- (void)hideNewStyleProgressSliderAnimated:;
- (void)updateChapterFrameInPauseOptimizeWithArray:;
- (id)stableDefaultThumbImage;
- (void)promptViewAppearing:;
- (void)handleLandscapeHideStatusWithHide:;
- (void)addGestureBlockingMaskView;
- (void)handleTapPauseSpeedLabel;
- (void)seekToCellTime;
- (void)setLoadAndVolumeView:;
- (void)setProgressSliderUnderView:;
- (void)setHotPointDot:;
- (void)setPreviewStartDot:;
- (void)setPreviewEndDot:;
- (void)setFakePreviewStartDot:;
- (void)setFakePreviewEndDot:;
- (void)setPlayStartDot:;
- (void)setFakePlayStartDot:;
- (id)sliderInSelfViewFrame;
- (void)setSliderInSelfViewFrame:;
- (id)chapterArray;
- (void)setChapterArray:;
- (void)setPlayBackSlider:;
- (BOOL)isLVideoHighLightStartPlayStrongState;
- (BOOL)isWatchVideoLaterStrongState;
- (void)setPauseTimeLabel:;
- (void)setPauseSpeedLabel:;
- (id)pauseBackView;
- (void)setPauseBackView:;
- (void)setBlockingViewPanGesture:;
- (BOOL)willLongPressSpeed;
- (double)v5StayDuration;
- (BOOL)hasChangeChapter;
- (void)setHasChangeChapter:;
- (void)setFineAdjustmentLabel:;
- (BOOL)progressUseAnimation;
- (double)lastProgressDuration;
- (void)setLastProgressDuration:;
- (void)setFrameSelectionCollectionView:;
- (void)setFrameSelectionCollectionRootView:;
- (void)setFrameSelectionContainerView:;
- (void)setFrameVerticalLineView:;
- (void)setPlayButtonView:;
- (id)frameSelectionExitMethod;
- (void)animationDidStop:finished:;
- (void)dealloc;
- (void)resume;
- (void)viewDidLayoutSubviews;
- (id)tracker;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)pause:;
- (void)viewDidLoad;
- (id)displayLink;
- (void)prepareForDisplay;
- (void)setLastTime:;
- (double)screenWidth;
- (id)createContext;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewWillBeginDragging:;
- (void)setTracker:;
- (void)setDisplayLink:;
- (void)scrollViewDidEndDecelerating:;
- (void)setData:;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (long long)videoDuration;
- (void)setAnimationDuration:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)reset;
- (double)animationDuration;
- (double)yOffset;
- (void)viewDidAppear;
- (double)lastTime;
- (void)pause;
- (void)setupDisplayLink;
- (unsigned long long)animationOptions;
- (id)maxContentOffset;
- (void)setAnimationOptions:;
- (void)setYOffset:;
- (id)previewImageView;
- (void)setPreviewImageView:;
- (id)panGesture;
- (void)setPanGesture:;
- (void)viewWillDisappear;
- (void)didEndDisplaying;
- (void)addObservers;
- (void)setPreviewType:;
- (unsigned long long)previewType;
- (void)stopLoadingAnimation;
- (void)setSliderValue:;
- (double)sliderValue;
- (id)progressSlider;
- (void)setProgressSlider:;
- (id)interactionViewController;
- (void)willDisplay;
- (id)gradientBackgroundView;
- (id)lastPosition;
- (double)progressWidth;
- (double)containerHeight;
- (void)setLastPosition:;
- (double)xOffset;
- (id)progressContext;
- (void)setProgressContext:;
- (double)lastWidth;
- (void)setLastWidth:;
- (void)setXOffset:;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEBrandColorAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;
+ (long long)progressSmallerWhenDragSolution;
@end
