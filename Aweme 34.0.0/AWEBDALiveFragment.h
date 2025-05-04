@interface AWEBDALiveFragment : IESLiveRoomComponent
@property (nonatomic) BDLiveCommerceFragment targetFragment;
@property (nonatomic) NSDictionary businessParams;
- (id)businessParams;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentCreate;
- (void)setBusinessParams:;
- (id)targetFragment;
- (void)remoteRoomDataReady:;
- (void)componentOrientationChanged:;
- (void)setTargetFragment:;
- (void).cxx_destruct;
+ (BOOL)componentShouldActive:;
+ (BOOL)isMixed;
@end
