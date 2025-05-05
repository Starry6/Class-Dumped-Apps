@interface IESLiveSpeedSlotFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSpeedSlotStore store;
- (void)componentCreate;
- (void)componentBindService;
- (void)componentMount;
- (void)componentOrientationChanged:;
- (void)componentUnmount;
- (void)loadSpeedGiftForce;
- (void)setNeedsLoadSpeedGift;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
