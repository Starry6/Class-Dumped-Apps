@interface IESLivePlayerLynxController : NSObject
@property (nonatomic) <IESLivePlayerProtocol> player;
@property (nonatomic) NSString sdkKey;
@property (nonatomic) <IESLivePlayerControllerDelegate> delegate;
@property (nonatomic) IESLivePlayerControllerConfig playerConfig;
@property (nonatomic) @? appInfoFetchBlock;
@property (nonatomic) @? reportStateBlock;
@property (nonatomic) @? trackBlock;
- (id)appInfoFetchBlock;
- (void)enqueueLivePlayer;
- (id)initWithPlayerConfig:;
- (id)playerConfig;
- (void)reloadWithStreamData;
- (void)reloadWithStreamData:defaultSDKKey:;
- (id)reportStateBlock;
- (id)sdkKey;
- (void)setAppInfoFetchBlock:;
- (void)setPlayerConfig:;
- (void)setPlayerInnerBlock;
- (void)setPrepareForReuse:;
- (void)setReportStateBlock:;
- (void)setSdkKey:;
- (void)setTrackBlock:;
- (void)setVideoRenderingEnable:;
- (id)trackBlock;
- (void)updatePlayerConfig:;
- (void)updateSDKKey:;
- (void)updateTVLSettings:;
- (BOOL)isPlaying;
- (void)play;
- (void)setDelegate:;
- (void)setMuted:;
- (void)stop;
- (void)close;
- (id)player;
- (id)delegate;
- (void).cxx_destruct;
- (void)setPlayer:;
- (id)playerView;
- (void)pause;
- (void)setScaleType:;
@end
