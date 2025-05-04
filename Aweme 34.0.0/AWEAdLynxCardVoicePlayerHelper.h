@interface AWEAdLynxCardVoicePlayerHelper : NSObject
@property (nonatomic) <IESVideoPlayerProtocol> player;
@property (nonatomic) NSMutableDictionary playerDict;
@property (nonatomic) BOOL hasHalfVolume;
@property (nonatomic) BOOL disableVoicePlayer;
@property (nonatomic) NSString endVoiceURL;
- (void)preloadWithURLs:;
- (void)resetVoicePlayer;
- (void)showVoicePlayer;
- (void)hideVoicePlayer;
- (BOOL)playURL:needVolumeDown:;
- (id)endVoiceURL;
- (void)setEndVoiceURL:;
- (void)setPlayerDict:;
- (BOOL)hasHalfVolume;
- (void)setVolumeWithFactor:;
- (void)setHasHalfVolume:;
- (void)setDisableVoicePlayer:;
- (id)playerDict;
- (void)handleVoicePlayToEnd:;
- (BOOL)disableVoicePlayer;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (id)initWithPlayerController:;
@end
