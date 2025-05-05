@interface IESLivePrivilegeLynxPlayerFragment : IESLiveRoomComponent
@property (nonatomic) IESLivePrivilegeLynxPlayerStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (void)clearCurrentContainerView;
- (void)componentBindService;
- (id)createLynxPlayerView:inView:initData:;
- (void)destroyLynxPlayerView;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
+ (BOOL)componentShouldActive:;
@end
