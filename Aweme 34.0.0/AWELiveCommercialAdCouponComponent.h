@interface AWELiveCommercialAdCouponComponent : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) <IESLiveRoomService> roomInfo;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) NSObject<AWECommerceLiveComponentsManager> componentsManager;
- (id)roomInfo;
- (id)aweme;
- (void)setAweme:;
- (id)trackContext;
- (void)setTrackContext:;
- (void)setRoomInfo:;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (id)componentsManager;
- (void)setComponentsManager:;
- (void)resetAdCouponInfo;
- (void)configWithFragmentInfo:roomContext:componentsManager:componentModel:;
- (void)tryReceivingAdCouponForAudience;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
