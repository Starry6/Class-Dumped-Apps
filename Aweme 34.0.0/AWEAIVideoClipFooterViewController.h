@interface AWEAIVideoClipFooterViewController : UIViewController
@property (nonatomic) Q currentPanelType;
@property (nonatomic) AWEAIVideoClipRetryPanelView loadingPanelView;
@property (nonatomic) AWEAIVideoClipMusicPanelView musicPanelView;
@property (nonatomic) AWEAIVideoSegmentsView videoSegmentsPanelView;
@property (nonatomic) AWEAIVideoClipFooterView videoClipPanelView;
@property (nonatomic) AWEModalTransitionDelegate transDelegate;
@property (nonatomic) NSArray assetModelArray;
@property (nonatomic) NSMutableArray musicList;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) AWEAIVideoClipFavoriteMusicViewModel favoriteMusicViewModel;
@property (nonatomic) BOOL favoriteMusicEnabled;
@property (nonatomic) BOOL favoriteMusicNeedUpdate;
@property (nonatomic) NSDictionary referExtra;
@property (nonatomic) <ACCMusicModelProtocol> selectedMusic;
@property (nonatomic) double startLocation;
@property (nonatomic) BOOL useSuggestClipRange;
@property (nonatomic) NSObject<AWEAIVideoClipFooterViewControllerDelegate> delegate;
@property (nonatomic) BOOL enableVideoSegementsEdit;
@property (nonatomic) NSString createID;
@property (nonatomic) <ACCChallengeModelProtocol> challenge;
@property (nonatomic) NSArray proBindMusicIDArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CGSize=dd} normalItemSize;
@property (nonatomic) {CGSize=dd} coverItemSize;
@property (nonatomic) AWEVideoRangeSlider videoRangeSlider;
@property (nonatomic) HTSVideoSpeedControl speedControl;
@property (nonatomic) UICollectionView framesCollectionView;
@property (nonatomic) UICollectionView videosCollectionView;
@property (nonatomic) UIView cursorView;
@property (nonatomic) AWESegmentedClipFooterPassThroughView framesCollectionLeftMaskView;
@property (nonatomic) AWESegmentedClipFooterPassThroughView framesCollectionRightMaskView;
@property (nonatomic) ACCAnimatedButton rotateButton;
@property (nonatomic) ACCAnimatedButton deleteButton;
@property (nonatomic) ACCAnimatedButton speedControlButton;
@property (nonatomic) ACCAnimatedButton aniCloseButton;
@property (nonatomic) ACCAnimatedButton aniOkButton;
@property (nonatomic) Q currentVideoIndex;
- (id)publishModel;
- (BOOL)useSuggestClipRange;
- (void)setUseSuggestClipRange:;
- (id)addExtraParams:;
- (unsigned long long)currentVideoIndex;
- (void)setCurrentVideoIndex:;
- (id)musicList;
- (void)setMusicList:;
- (double)currentPanelHeight;
- (id)referExtra;
- (void)setPublishModel:;
- (id)loadingPanelView;
- (void)setLoadingPanelView:;
- (void)handleFavoriteStatusChangedNotification:;
- (id)selectedMusic;
- (void)setSelectedMusic:;
- (void)setCreateID:;
- (id)createID;
- (void)setReferExtra:;
- (void)moreDataDidLoad;
- (id)framesCollectionView;
- (id)videoRangeSlider;
- (id)framesCollectionLeftMaskView;
- (id)framesCollectionRightMaskView;
- (id)speedControl;
- (id)aniOkButton;
- (id)aniCloseButton;
- (id)normalItemSize;
- (id)coverItemSize;
- (id)videosCollectionView;
- (id)initWithSourceAssetModelArray:referExtra:;
- (void)setAssetModelArray:;
- (void)setCurrentPanelType:;
- (void)setFavoriteMusicEnabled:;
- (BOOL)favoriteMusicEnabled;
- (void)setFavoriteMusicViewModel:;
- (id)favoriteMusicViewModel;
- (id)musicPanelView;
- (id)videoClipPanelView;
- (id)videoSegmentsPanelView;
- (void)p_showSelectMusicViewController;
- (void)fetchFavoriteMusicList;
- (BOOL)favoriteMusicNeedUpdate;
- (void)p_showPanel:;
- (void)updateMusicItemList:andUseMusic:;
- (void)updateFavoriteMusicListLoading:;
- (void)setFavoriteMusicNeedUpdate:;
- (void)segmentedClipsEndAnimationWithCompletion:;
- (unsigned long long)currentPanelType;
- (double)p_panelHeightForPanelType:;
- (id)transDelegate;
- (void)p_handleSelectMusic:error:;
- (id)proBindMusicIDArray;
- (id)p_recommendMusic;
- (void)p_retryAction;
- (void)p_musicPanelConfirmAction:;
- (void)p_rotateAction:;
- (void)p_videoSegmentsFinishButtonAction;
- (id)assetModelArray;
- (void)updateMusicList:error:;
- (BOOL)enableVideoSegementsEdit;
- (void)p_transitionFrom:to:;
- (id)p_panelViewOfType:;
- (BOOL)shouldContinueProceedure;
- (void)segmentedClipsStartAnimationWithCell:;
- (BOOL)isInSingleSegmentEditing;
- (BOOL)isInVideoSegmentsEditing;
- (void)footerViewWillAppear;
- (void)footerViewDidAppear;
- (void)footerViewWillDisappear;
- (void)footerViewDidDisappear;
- (id)speedControlButton;
- (void)undoMusicSelection;
- (void)didFinishDeleteAssetModelAtIndex:;
- (void)setEnableVideoSegementsEdit:;
- (id)initWithSourceAssetModelArray:publishModel:;
- (void)setProBindMusicIDArray:;
- (void)setMusicPanelView:;
- (void)setVideoSegmentsPanelView:;
- (void)setVideoClipPanelView:;
- (void)setTransDelegate:;
- (void)dealloc;
- (id)delegate;
- (void)viewDidLoad;
- (id)challenge;
- (id)containerView;
- (void)setChallenge:;
- (id)deleteButton;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)cursorView;
- (double)startLocation;
- (void)setStartLocation:;
- (id)rotateButton;
@end
