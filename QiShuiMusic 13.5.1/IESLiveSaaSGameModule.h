@interface IESLiveSaaSGameModule : IESLiveSaaSModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addGamePlatformStateSubscriber:;
- (void)addAudienceGamePlatformStateSubscriber:;
- (unsigned long long)audienceGamePlatformCurrentGameProcessState;
- (unsigned long long)gamePlatformCurrentGameProcessState;
- (id)getGamePlatformBigInviteView;
- (id)getGamePlatformRestartView;
- (BOOL)isCurrentlyPlayingGame;
- (BOOL)isUserInInviteeStatus;
- (BOOL)isUserInInviterStatus;
- (void)notifyGamePlatformCancelInviteGamingUser;
- (void)notifyGamePlatformReInviteGamingUser;
- (void)notifyGamePlatformUserPropsPKWinnerResult:;
- (void)removeAudienceGamePlatformStateSubscriber:;
- (void)removeGamePlatformStateSubscriber:;
- (void)showGamePlatfromInviterMatchingView:;
@end
