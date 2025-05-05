@interface IESLiveBusinessConfigureFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveBusinessConfigureStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentBindService;
- (void)componentMount;
- (void)componentOrientationChanged:;
- (void)componentOrientationTransitionBegin:;
- (void)didAutoRotateToOrientation:size:;
- (void)handleBusinessConfigure:;
- (void)willAutoRotateToOrientation:size:;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
- (void)messageReceived:;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
