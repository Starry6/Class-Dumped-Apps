@interface IESLiveSmallWindowOuterPlayerView : UIView
@property (nonatomic) UIView operationContainer;
@property (nonatomic) UIView streamContainer;
@property (nonatomic) UIView bgContainer;
@property (nonatomic) UIView shadowView;
@property (nonatomic) UIButton enterLive;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UIVisualEffectView bgEffectview;
@property (nonatomic) UILabel countDownLabel;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate silentDate;
@property (nonatomic) BOOL isUserSetMuted;
@property (nonatomic) BOOL isPreLoaded;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) UIButton audioBtn;
@property (nonatomic) {CGSize=dd} mediaSize;
@property (nonatomic) IESLiveSmallWindowPlayerController playerController;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) @? loadStateChange;
@property (nonatomic) @? receiveStreamDryUp;
@property (nonatomic) @? preLoadFinished;
@property (nonatomic) NSString currentSmallWindowFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? smallWindowTrack;
@property (nonatomic) @? muteStateDidChanged;
@property (nonatomic) @? closeWindowHandler;
@property (nonatomic) @? enterRoomHandler;
- (void)buildPlayerView;
- (void)didClickMuteBtn;
- (void)prePlay;
- (void)setIsPreLoaded:;
- (void)showLiveEndView;
- (id)streamContainer;
- (id)loadStateChange;
- (id)preLoadFinished;
- (void)setBgContainer:;
- (id)audioBtn;
- (id)bgContainer;
- (id)bgEffectview;
- (void)buildAudioModeView;
- (void)buildAudioPlayer;
- (void)buildBgView;
- (void)buildMultiLinkMicModeView;
- (void)buildOperationView;
- (id)closeBtn;
- (id)closeWindowHandler;
- (id)countDownLabel;
- (void)countDownWithTime:;
- (id)currentSmallWindowFrom;
- (void)didClickCloseBtn;
- (void)didClickEnterLiveRoom;
- (id)enterLive;
- (id)enterRoomHandler;
- (BOOL)isPreLoaded;
- (BOOL)isUserSetMuted;
- (void)liveDidEnded;
- (id)muteStateDidChanged;
- (id)operationContainer;
- (void)player:didReceiveError:;
- (void)player:loadStateDidChange:;
- (void)player:mediaSizeDidChange:;
- (id)receiveStreamDryUp;
- (void)resizeWindow:;
- (id)roomModel;
- (void)setAudioBtn:;
- (void)setBgEffectview:;
- (void)setCloseBtn:;
- (void)setCloseWindowHandler:;
- (void)setCountDownLabel:;
- (void)setCurrentSmallWindowFrom:;
- (void)setEnterLive:;
- (void)setEnterRoomHandler:;
- (void)setIsUserSetMuted:;
- (void)setLoadStateChange:;
- (void)setMuteStateDidChanged:;
- (void)setOperationContainer:;
- (void)setPreLoadFinished:;
- (void)setReceiveStreamDryUp:;
- (void)setRoomModel:;
- (void)setSilentDate:;
- (void)setSmallWindowTrack:;
- (void)setStreamContainer:;
- (void)setupContainer;
- (id)silentDate;
- (id)smallWindowTrack;
- (void)updateAudioBtnStatus;
- (id)startDate;
- (id)init;
- (void)dealloc;
- (void)play;
- (void)setStartDate:;
- (id)playerController;
- (void)stop;
- (void)setPlayerController:;
- (void).cxx_destruct;
- (void)setShadowView:;
- (id)shadowView;
- (id)mediaSize;
- (void)setMediaSize:;
- (void)setBgImageView:;
- (id)bgImageView;
- (void)setupLayout;
@end
