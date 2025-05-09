@interface AWEPlayInteractionPaginatedProgressController : AWEPlayInteractionNewBaseController
@property (nonatomic) NSNumber volumeHandlerID;
@property (nonatomic) AWEStoryProgressContainerView paginatedProgressView;
@property (nonatomic) UIView richContainerProgressView;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) q longDotsProgressPosition;
@property (nonatomic) double lastPlayInteractionViewHeight;
@property (nonatomic) double lastContainerGridMargin;
@property (nonatomic) <AWEPadKeyboardProgressControlProtocol> padKeyboradProgressControl;
@property (nonatomic) @? paginatedProgressBarClickedEventBlock;
@property (nonatomic) @? paginatedProgressBarDidSelectedItemEventBlock;
@property (nonatomic) @? downloadPageDidSelectAlbumPreviewItemEventBlock;
@property (nonatomic) <AFDRichContainerProgressControllerProtocol> richContainerProgressController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)richContainerProgressController;
- (void)richContainerDidCreateProgressView:;
- (BOOL)shouldRecognizeWindowGesture;
- (void)didUpdatePaginatedProgressWithIndex:totalCount:;
- (id)progressConfig;
- (BOOL)canPlayerPlayAfterTouch;
- (void)didUpdatePaginatedProgressWithDuration:totalCount:currentIndex:currentProcess:needAnimation:;
- (void)previewInteractionDidStart;
- (void)containerStartPlaying;
- (void)setHide:;
- (void)swipeToLastStory;
- (void)swipeToNextStory;
- (void)scrollToIndex:;
- (id)accessibilityLabels;
- (id)aAWEPadModuleAdapter;
- (void)setIsDisplaying:;
- (void)updateAllSubViews;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (void)splitStatusChanged;
- (id)richContainerProgressView;
- (BOOL)isShowingPanels;
- (void)setContainerHidden:;
- (id)progressViewInUse;
- (void)setRichContainerProgressView:;
- (void)setVolumeHandlerID:;
- (id)volumeHandlerID;
- (id)paginatedProgressView;
- (void)setPaginatedProgressView:;
- (BOOL)progressContainerIsVisiable;
- (id)paginatedProgressBarClickedEventBlock;
- (void)setPaginatedProgressBarClickedEventBlock:;
- (id)paginatedProgressBarDidSelectedItemEventBlock;
- (void)setPaginatedProgressBarDidSelectedItemEventBlock:;
- (id)downloadPageDidSelectAlbumPreviewItemEventBlock;
- (void)setDownloadPageDidSelectAlbumPreviewItemEventBlock:;
- (void)updatePaginatedProgressWithIndex:progress:duration:animated:;
- (id)storyRightBottomContainer;
- (void)setRichContainerProgressController:;
- (void)registerPadKeyboardBindings;
- (void)setProgressContainerViewHidden:;
- (BOOL)shouldShowPaginatedProgress;
- (void)updateUIWithSpeedUp;
- (double)lastContainerGridMargin;
- (id)paginatedProgressPayload;
- (void)setLastContainerGridMargin:;
- (double)lastPlayInteractionViewHeight;
- (void)setLastPlayInteractionViewHeight:;
- (void)updatePaginateProgressView:;
- (long long)paginatedProgressBarType;
- (BOOL)isSlidingAd;
- (BOOL)shouldShowPaginatedProgressInRichAwemeVC;
- (void)setLongDotsProgressPosition:;
- (double)calculateDescriptionLabelWithImageOffset;
- (double)progressContainerViewHeight;
- (double)p_progressContainerYOffset;
- (long long)longDotsProgressPosition;
- (double)calculateLeftContainerOffset:;
- (void)pureAction;
- (BOOL)seekOffset:completion:;
- (BOOL)isPlayerOnScreen;
- (void)updatePaginatedProgressWithIndex:totalCount:;
- (void)updatePaginatedProgressWithDuration:totalCount:currentIndex:currentProcess:needAnimation:;
- (long long)addSpaceBetweenLeftAndBottomInteraction;
- (id)padKeyboradProgressControl;
- (void)setPadKeyboradProgressControl:;
- (id)progressView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidAppear;
- (void)pause;
- (BOOL)isDisplaying;
- (void)updateUI;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)didEndDisplaying;
- (void)previewInteractionDidEnd;
- (void)willDisplay;
+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)shouldReduceHotZoneForNoteProgressViewWith:;
+ (long long)progressViewTypeOptWithAB:;
+ (BOOL)leftContainerHasBulletWithContainer:;
+ (BOOL)shouldShowProgressViewDefaultWith:;
@end
