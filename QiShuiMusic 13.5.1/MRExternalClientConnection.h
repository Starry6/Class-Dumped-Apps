@interface MRExternalClientConnection : MRProtocolClientConnection
@property (nonatomic) NSArray subscribedPlayerPaths;
@property (nonatomic) BOOL registeredToNowPlayingUpdates;
@property (nonatomic) BOOL registeredToVolumeUpdates;
@property (nonatomic) BOOL registeredKeyboardUpdates;
@property (nonatomic) BOOL registeredToOutputDeviceUpdates;
@property (nonatomic) BOOL registeredToSystemEndpointUpdates;
@property (nonatomic) I voiceRecordingState;
@property (nonatomic) MRCryptoPairingSession cryptoSession;
@property (nonatomic) BOOL cryptoEnabled;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (id)subscribedPlayerPaths;
- (void)setSubscribedPlayerPaths:;
- (BOOL)registeredToNowPlayingUpdates;
- (void)setRegisteredToNowPlayingUpdates:;
- (BOOL)registeredToVolumeUpdates;
- (void)setRegisteredToVolumeUpdates:;
- (BOOL)registeredKeyboardUpdates;
- (void)setRegisteredKeyboardUpdates:;
- (BOOL)registeredToOutputDeviceUpdates;
- (void)setRegisteredToOutputDeviceUpdates:;
- (BOOL)registeredToSystemEndpointUpdates;
- (void)setRegisteredToSystemEndpointUpdates:;
- (unsigned int)voiceRecordingState;
- (void)setVoiceRecordingState:;
- (id)cryptoSession;
- (void)setCryptoSession:;
- (BOOL)cryptoEnabled;
- (void)setCryptoEnabled:;
@end
