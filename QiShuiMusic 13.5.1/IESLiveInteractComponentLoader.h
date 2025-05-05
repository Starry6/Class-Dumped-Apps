@interface IESLiveInteractComponentLoader : IESLiveInteractComponentLoaderBase
@property (nonatomic) BOOL mounted;
@property (nonatomic) BOOL shouldDispatchEnterRoom;
@property (nonatomic) BOOL isMounted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canCloseInteract;
- (BOOL)canLeaveRoom;
- (void)didChangeLayoutFrom:toLayout:;
- (void)didJoinChannelWithLayout:;
- (void)didLeaveChannelWithLayout:;
- (void)didSetAttachingDIContext;
- (void)didUpdateRoom:;
- (void)didUpdatedGuestListWithActiveList:;
- (void)endInteract;
- (void)loadAllComponents;
- (void)orientationTransitionBegin:;
- (void)setMounted:;
- (void)setShouldDispatchEnterRoom:;
- (BOOL)shouldDispatchEnterRoom;
- (void)startInteract;
- (void)willChangeLayoutFrom:toLayout:;
- (void)willLeaveRoom;
- (BOOL)isMounted;
- (BOOL)mounted;
@end
