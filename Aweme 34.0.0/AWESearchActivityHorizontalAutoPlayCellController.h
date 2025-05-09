@interface AWESearchActivityHorizontalAutoPlayCellController : UIViewController
@property (nonatomic) <AWELiveStreamPlayer> playerController;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) YYLabel hostNameLabel;
@property (nonatomic) AWESearchLiveStatusRichView liveSearchStatusView;
@property (nonatomic) AWEGradientView gradientMaskView;
@property (nonatomic) BOOL active;
@property (nonatomic) double startPlayerTime;
@property (nonatomic) double startLoadingTime;
@property (nonatomic) AWEGeneralSearchModel searchModel;
@property (nonatomic) NSString keyword;
@property (nonatomic) NSString searchId;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) NSString referString;
@property (nonatomic) q index;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double searchHorizontalAutoPlayCellWidth;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) @? selectedBlock;
@property (nonatomic) AWEOriginalAdModel adModel;
@property (nonatomic) BOOL isResourceRecalled;
@property (nonatomic) UIButton videoActionButton;
@property (nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol><AWEAwemePlayVideoProtocol><AWEAwemePlayVideoTrackProtocol> playVideoViewController;
@property (nonatomic) @? playerWillStartNextLoop;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setReferString:;
- (id)logExtraDict;
- (id)searchId;
- (void)setSearchId:;
- (id)gradientMaskView;
- (void)setGradientMaskView:;
- (void)player:loadStateDidChange:;
- (void)player:mediaSizeDidChange:;
- (void)player:didReceiveMetaInfo:processed:;
- (void)player:didReceiveError:;
- (void)updateLiveListOfVideoFeedWithData:withReferString:;
- (id)livePlayerView;
- (void)resetLivePlayer;
- (id)liveSearchStatusView;
- (void)trackLiveWindowDurationWithItem:startPlayTime:;
- (void)trackLiveWindowShowWithItem:;
- (void)setLiveSearchStatusView:;
- (void)_stopPlayer;
- (double)startPlayerTime;
- (void)setStartPlayerTime:;
- (void)setStartLoadingTime:;
- (double)startLoadingTime;
- (void)trackLiveWindowPlayedDurationWithItem:startLoadingTime:;
- (void)_startPlayLiveWithStreamData:orStreamURL:;
- (id)hostNameLabel;
- (void)_checkRoomEndStatus;
- (void)_updateCoverImageWithAweme:;
- (void)trackSearchResultShowWithItem:;
- (void)trackLiveClick;
- (void)setHostNameLabel:;
- (void)setIndex:;
- (void)didBecomeActive;
- (long long)index;
- (void)setActive:;
- (void)dealloc;
- (void)setPlayerController:;
- (void)viewDidLoad;
- (void)didResignActive;
- (id)transitionContext;
- (id)playerController;
- (BOOL)active;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isActive;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)keyword;
- (void)setKeyword:;
- (void)setSearchModel:;
- (id)searchModel;
- (void)updateModel:;
- (id)livePlayer;
+ (id)horizontalCellSizeWithModel:;
@end
