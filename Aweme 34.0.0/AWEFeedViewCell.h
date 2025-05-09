@interface AWEFeedViewCell : UITableViewCell
@property (nonatomic) AWEFeedCellViewController viewController;
@property (nonatomic) # pInteractionControllerFactory;
@property (nonatomic) ^{EngineAudioWrapper=^?^?^?^?^v} audioWrapper;
@property (nonatomic) ^{EngineVideoWrapper=^?^?^v} videoWrapper;
@property (nonatomic) q indexPath;
@property (nonatomic) UIViewController parentVC;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeModel registerElementModel;
@property (nonatomic) q cellDisplayState;
@property (nonatomic) q cellPageAppearState;
@property (nonatomic) @? currentCellPageAppearStateBlock;
@property (nonatomic) UIView feedTableViewCellMaskView;
@property (nonatomic) <UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIViewController<AWEFeelGoodCellViewControllerProtocol> feelGoodViewController;
- (void)layoutSubviews;
- (id)referString;
- (void)setReferString:;
- (void)prepareForDisplayWithoutCoverImage;
- (void)pauseIfNotStop;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:;
- (id)audioWrapper;
- (void)setAudioWrapper:;
- (id)videoWrapper;
- (void)setVideoWrapper:;
- (BOOL)isVideoRelatedPanelShowing;
- (void)didDisplay;
- (BOOL)isRelatedVideoPanelShowing;
- (BOOL)isCommentPanelShowing;
- (BOOL)isLikeUserPanelShowing;
- (BOOL)isAITextPanelShowing;
- (id)aAWEPadModuleAdapter;
- (id)registerElementModel;
- (void)setRegisterElementModel:;
- (BOOL)fullDetaillHalfScreenViewShowed;
- (void)updateAntiAddictedOptStrongRemindView:;
- (void)didEndDisplayingBeforeReset;
- (BOOL)isViewerListShowing;
- (void)configWithModel:;
- (long long)cellDisplayState;
- (void)setCellDisplayState:;
- (long long)cellPageAppearState;
- (void)setCellPageAppearState:;
- (id)currentCellPageAppearStateBlock;
- (void)setCurrentCellPageAppearStateBlock:;
- (id)feedTableViewCellMaskView;
- (void)setFeedTableViewCellMaskView:;
- (BOOL)hadPrepareToDisplay;
- (void)setHadPrepareToDisplay:;
- (void)afterDidEndDisplaying;
- (void)resetRefreshFlag;
- (void)seekTime:completion:;
- (void)addFeedTableViewCellMaskView:;
- (void)removeFeedTableViewCellMaskView;
- (void)mutePlayerController:;
- (void)replaceViewController:removeIfExisting:;
- (BOOL)isCommonFeedCell;
- (long long)currentVideoScaleMode;
- (void)removeCellChildVCForMemoryOpt;
- (void)setInteractionControllerFactory:;
- (Class)interactionControllerFactory;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void)setFeelGoodViewController:;
- (id)feelGoodViewController;
- (Class)pInteractionControllerFactory;
- (void)setPInteractionControllerFactory:;
- (void)p_configVoiceOverElements;
- (id)scrollViewDelegate;
- (void)dealloc;
- (void)play;
- (long long)indexPath;
- (void)prepareForDisplay;
- (void)setFrame:;
- (id)viewController;
- (void)setIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (double)currentPlaybackTime;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)setViewController:;
- (BOOL)accessibilityScroll:;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)pauseIfPlaying;
- (void)willDisplay;
- (void)pageDidDisappear:;
- (id)parentVC;
- (void)setParentVC:;
- (void)pageWillAppear:;
- (void)pageDidAppear:;
- (void)pageWillDisappear:;
+ (Class)aAWEPadModuleAdapterClass;
@end
