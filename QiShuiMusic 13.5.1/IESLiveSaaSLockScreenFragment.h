@interface IESLiveSaaSLockScreenFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)applicationResignActiveNotification:;
- (void)clearIESLiveSaaSLockScreenCovers;
- (void)componentDidMount;
- (void)configIESLiveSaaSLockScreenCovers;
- (void)disableAllRemoteCommands;
- (BOOL)isEnablePiP;
- (void)liveDidEnterBackground;
- (void)liveWillEndWithReason:;
- (void)dealloc;
- (void)setup;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
