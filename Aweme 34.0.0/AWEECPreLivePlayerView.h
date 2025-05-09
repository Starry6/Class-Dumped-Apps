@interface AWEECPreLivePlayerView : UIView
@property (nonatomic) <IESLivePlayerProtocol> innerPlayer;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) Q currentPlayState;
@property (nonatomic) <IESECMallLiveDelegate> delegate;
@property (nonatomic) BOOL respondsSEI;
@property (nonatomic) NSString streamData;
@property (nonatomic) NSString sdkKey;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) double volume;
@property (nonatomic) double startTime;
@property (nonatomic) double playTime;
@property (nonatomic) BOOL enableBGPlay;
@property (nonatomic) NSString posterURL;
@property (nonatomic) NSString fitMode;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) BOOL autoLifecycle;
@property (nonatomic) double rate;
@property (nonatomic) NSString roomID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)fitMode;
- (void)setFitMode:;
- (BOOL)enableHardDecode;
- (void)setEnableHardDecode:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)sdkKey;
- (void)setStreamData:;
- (id)innerPlayer;
- (BOOL)needPreload;
- (void)setNeedPreload:;
- (void)setPlayTime:;
- (void)player:loadStateDidChange:;
- (void)player:playbackStateDidChange:;
- (void)setInnerPlayer:;
- (void)__configFitMode;
- (void)configCoverHidden:;
- (id)posterURL;
- (void)setPosterURL:;
- (void)player:didReceiveMetaInfo:processed:;
- (void)player:didReceiveError:;
- (void)playerFrozen:;
- (void)playerResume:;
- (unsigned long long)currentPlayState;
- (void)setCurrentPlayState:;
- (BOOL)autoLifecycle;
- (void)setAutoLifecycle:;
- (void)reloadDataWithAwemeModel:defaultSDKKey:;
- (void)setEnableBGPlay:;
- (void)updateVideoQuality:;
- (id)enqueuePlayer;
- (void)dequeuePlayer;
- (void)setSdkKey:;
- (BOOL)respondsSEI;
- (void)__configPoster:;
- (BOOL)enableBGPlay;
- (void)setRespondsSEI:;
- (void)setRate:;
- (BOOL)mute;
- (double)rate;
- (double)volume;
- (id)roomID;
- (void)dealloc;
- (void)play;
- (void)setStartTime:;
- (id)delegate;
- (void)setVolume:;
- (id)initWithDelegate:;
- (double)playTime;
- (void)setMute:;
- (void).cxx_destruct;
- (void)setRoomID:;
- (void)reset;
- (void)setDelegate:;
- (double)startTime;
- (void)layoutSubviews;
- (void)stop;
- (void)pause;
- (void)didMoveToWindow;
- (id)streamData;
- (BOOL)autoPlay;
- (void)setAutoPlay:;
@end
