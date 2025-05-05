@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer
@property (nonatomic) AVPlayer player;
@property (nonatomic) AVPlayerLayer playerLayer;
- (BOOL)hudEnabled;
- (id)playerLayer;
- (id)init;
- (void)dealloc;
- (void)setColor:;
- (void)currentItemChanged;
- (void)getHudSetting;
- (BOOL)valueLoadedForKey:onObject:;
- (id)displayStringGenerator;
- (void)startDispatchTimer;
- (void)setPlayerLayer:;
- (id)player;
- (void).cxx_destruct;
- (void)setPlayer:;
- (void)readHudSettingsAndCallCompletionHandler:;
- (void)updateHudWithDisplayString:;
- (void)_hudUpdateTrigger;
- (void)currentItemTracksChanged;
- (void)updateBounds:;
- (void)copyPropertiesFromStringGenerator:;
- (float)getScaleFactorForDisplaySize:;
@end
