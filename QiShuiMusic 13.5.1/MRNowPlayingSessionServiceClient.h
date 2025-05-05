@interface MRNowPlayingSessionServiceClient : NSObject
- (id)initWithService:;
- (void)_handleDestroyPlayersForOrigin:;
- (id)_generatePlayerPathForOrigin:;
- (id)_generatePlayerID;
- (void).cxx_destruct;
- (id)_existingPlayerPathForOrigin:;
- (void)mediaServicesResetNotification:;
- (void)_handleCreatePlayerForOrigin:deviceInfo:completion:;
@end
