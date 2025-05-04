@interface AWERTVAudioCoordinator : HTSService
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) NSPointerArray videoPlayers;
@property (nonatomic) <RTVVoipContextManagerInterface> contextManager;
@property (nonatomic) NSMutableDictionary playerVolumes;
@property (nonatomic) NSMutableDictionary playerAudioDeviceChanged;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)rxAwakeFromPropertyInjection;
- (void)voipServiceDidFinish:voip:;
- (id)videoPlayers;
- (id)__keyForPlayer:;
- (id)playerVolumes;
- (BOOL)__hasHeadset;
- (id)playerAudioDeviceChanged;
- (void)__enumerateVideoPlayersUsingBlock:;
- (BOOL)needSuppressVolumeWithPlayer:;
- (double)suppressionVolume;
- (BOOL)containPlayer:;
- (BOOL)playerAudioDeviceDidChanged:;
- (void)activeSuppressVolume;
- (id)injector;
- (void).cxx_destruct;
- (id)contextManager;
@end
