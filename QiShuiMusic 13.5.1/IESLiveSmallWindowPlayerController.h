@interface IESLiveSmallWindowPlayerController : NSObject
@property (nonatomic) <IESLivePlayerProtocol> player;
- (void)reloadWithStreamData:defaultSDKKey:;
- (id)init;
- (void)play;
- (void)stop;
- (void)close;
- (void)setMute:;
- (id)player;
- (void).cxx_destruct;
- (void)setPlayer:;
- (void)pause;
- (BOOL)isMute;
@end
