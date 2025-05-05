@interface IESLiveSaaSAudienceGamePlatformStore : NSObject
@property (nonatomic) IESLiveSaaSAudienceGamePlatformSEIAbilityImpl seiService;
@property (nonatomic) IESLiveSaaSLiveRoomModel liveRoom;
@property (nonatomic) IESLiveSaaSAudienceGamePlatformStateService stateService;
@property (nonatomic) BOOL isGamePlaying;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addAudienceGamePlatformStateSubscriber:;
- (void)audienceGamePlatformDidReceiveSEINotification:;
- (void)didSetAttachingDIContext;
- (unsigned long long)gamePlatformCurrentGameProcessState;
- (id)initWithTrackerContext:liveRoom:;
- (BOOL)isGamePlaying;
- (id)liveRoom;
- (void)removeAudienceGamePlatformStateSubscriber:;
- (id)seiService;
- (void)setIsGamePlaying:;
- (void)setLiveRoom:;
- (void)setSeiService:;
- (void)setStateService:;
- (id)stateService;
- (void).cxx_destruct;
@end
