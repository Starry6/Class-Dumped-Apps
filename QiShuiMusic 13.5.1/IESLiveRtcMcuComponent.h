@interface IESLiveRtcMcuComponent : IESLiveInteractComponentBase
@property (nonatomic) UIView mcuCanvas;
@property (nonatomic) <IESLiveInteractionLinkerService> linker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentBindContext;
- (void)componentDidUpdatedGuestList:;
- (void)destroyPublicStreamCanvas;
- (void)interactionLinkerService:startPlayPublicStreamResult:needVideoCanvas:;
- (void)interactionLinkerService:stopPlayPublicStreamResult:;
- (id)linker;
- (id)mcuCanvas;
- (void)setLinker:;
- (void)setMcuCanvas:;
- (BOOL)shouldMuteOtherRoomRTCStream;
- (void).cxx_destruct;
@end
