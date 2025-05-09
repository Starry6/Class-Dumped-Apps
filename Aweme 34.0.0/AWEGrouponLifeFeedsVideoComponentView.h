@interface AWEGrouponLifeFeedsVideoComponentView : AWEGrouponLifeFeedsBaseComponentView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEGouponC2FeedDualAnchorView coverBottomView;
@property (nonatomic) AWEGradientView coverBottomGradient;
@property (nonatomic) AWEGouponC2FeedDualAnchorView coverTopView;
@property (nonatomic) AWEGrouponLifeFeedsUserInfoView userInfoView;
@property (nonatomic) AWENearbyPaddingLabel adLabel;
@property (nonatomic) NSObject<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (nonatomic) AWEBinding bindDiggCount;
@property (nonatomic) AWEBinding bindDiggStatus;
@property (nonatomic) UIViewController<AWEAwemePlayVideoProtocol><AWEAwemePlayVideoControllerProtocol><AWEAwemePlayVideoTrackProtocol> playerViewController;
@property (nonatomic) BOOL innerScrollCanTrack;
@property (nonatomic) double latstEnterInnerTimeSt;
@property (nonatomic) double innerDidCreateTimeSt;
@property (nonatomic) q lastInnerLoadmoreIndex;
@property (nonatomic) BOOL innerFmpTracked;
@property (nonatomic) AWEGradientView largeCardBottomGradientView;
@property (nonatomic) double displayTime;
@property (nonatomic) AWEGrouponLifeFeedsVideoComponentVM videoViewModel;
@property (nonatomic) BOOL playing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)detailTableViewControllerDidLoadFinish:;
- (void)videoPlayerDidReadyForDisplay:;
- (void)detailTableViewControllerWillExit:currentAwemeModel:;
- (void)detailTableViewControllerDidScroll:detailVC:isScrollDown:index:;
- (void)player:playbackFailedWithError:;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)playerWillStartNextLoop:;
- (void)player:didChangePlaybackToAction:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)updateCoverImage;
- (void)stopPlay;
- (id)adLabel;
- (void)setAdLabel:;
- (void)startPlay;
- (void)handleTapGes:;
- (void)bindViewModel:;
- (void)onAwemeDiggNotification:;
- (void)setUserInfoView:;
- (void)setupPlayerViewController;
- (void)playWithMute:;
- (id)largeCardBottomGradientView;
- (id)coverFrame;
- (void)setLargeCardBottomGradientView:;
- (void)trackCoverDidShow:;
- (void)resetVideoPlayerVC;
- (void)trackPreviewPlayStart;
- (void)resetPlay;
- (void)trackInnerDidShow:;
- (void)playEnd;
- (double)latstEnterInnerTimeSt;
- (double)innerDidCreateTimeSt;
- (void)setLastInnerLoadmoreIndex:;
- (void)setBindDiggStatus:;
- (id)bindDiggStatus;
- (void)setBindDiggCount:;
- (id)bindDiggCount;
- (void)updateInfoWithCellWidth:;
- (void)updateUILayout;
- (void)clickWithModel:clickType:;
- (void)trackCellClickWithAweme:clickType:;
- (void)registerPlayerObsever;
- (void)setInnerScrollCanTrack:;
- (void)setInnerDidCreateTimeSt:;
- (void)__handleVideoPlayFailed:;
- (BOOL)innerFmpTracked;
- (void)unRegisterPlayerObsever;
- (void)setInnerFmpTracked:;
- (void)updatePlayerVC;
- (void)clickDigg;
- (void)clickAnchorView;
- (void)setLatstEnterInnerTimeSt:;
- (long long)lastInnerLoadmoreIndex;
- (void)trackDiggResult:;
- (BOOL)innerScrollCanTrack;
- (id)coverTopView;
- (id)coverBottomView;
- (id)coverBottomGradient;
- (void)setCoverBottomView:;
- (void)setCoverBottomGradient:;
- (void)setCoverTopView:;
- (id)videoViewModel;
- (id)commonLiveEnvParamsWithAweme:extraInfo:;
- (id)playerLogExtraParams;
- (id)fetchAdRequestParams;
- (void)setVideoViewModel:;
- (id)interactor;
- (BOOL)playing;
- (void)addObserver;
- (BOOL)canPlay;
- (void)setPlaying:;
- (void)setInteractor:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)playerViewController;
- (void)pause;
- (void)setDisplayTime:;
- (double)displayTime;
- (void)setupUI;
- (void)setPlayerViewController:;
- (void)playStart;
- (id)userInfoView;
- (void)tapAction:;
+ (double)cardPadding;
@end
