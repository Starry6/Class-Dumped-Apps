@interface AWEECLiveAudienceAccessServiceImpl : NSObject
@property (nonatomic) IESECLiveRoomModel roomModel;
@property (nonatomic) <IESECAudienceAccessServiceSubscriber> subscriber;
@property (nonatomic) <AWELiveAudienceAccessService> accessService;
@property (nonatomic) AWELiveAudienceAccessServiceConfig serviceConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomModel;
- (void)setRoomModel:;
- (void)mute:;
- (void)setServiceConfig:;
- (id)serviceConfig;
- (void)setAccessService:;
- (id)accessService;
- (void)bindLiveWithView:viewController:;
- (void)enterLive;
- (void)exitLive;
- (void)prePullStream;
- (id)initWithRoomModel:subscriber:;
- (void)play;
- (id)subscriber;
- (void)setSubscriber:;
- (void)setup;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
@end
