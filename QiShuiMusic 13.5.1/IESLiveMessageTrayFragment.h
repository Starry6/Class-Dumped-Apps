@interface IESLiveMessageTrayFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveMessageTrayStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (void)addTrayWithBusinessConfigure:;
- (void)componentBindService;
- (void)componentUnmount;
- (void)disappearMatchHotTray:;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
