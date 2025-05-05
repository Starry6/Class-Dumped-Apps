@interface MRClientUpdatesConfigMessage : MRProtocolMessage
@property (nonatomic) NSArray subscribedPlayerPaths;
@property (nonatomic) BOOL nowPlayingUpdates;
@property (nonatomic) BOOL artworkUpdates;
@property (nonatomic) BOOL volumeUpdates;
@property (nonatomic) BOOL keyboardUpdates;
@property (nonatomic) BOOL outputDeviceUpdates;
@property (nonatomic) BOOL systemEndpointUpdates;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:error:;
- (id)initWithNowPlayingUpdates:artworkUpdates:volumeUpdates:keyboardUpdates:outputDeviceUpdates:systemEndpointUpdates:subscribedPlayerPaths:;
- (BOOL)nowPlayingUpdates;
- (BOOL)artworkUpdates;
- (BOOL)volumeUpdates;
- (BOOL)keyboardUpdates;
- (BOOL)outputDeviceUpdates;
- (BOOL)systemEndpointUpdates;
- (id)subscribedPlayerPaths;
- (void)setSubscribedPlayerPaths:;
@end
