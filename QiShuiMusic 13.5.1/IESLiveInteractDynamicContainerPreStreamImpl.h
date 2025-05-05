@interface IESLiveInteractDynamicContainerPreStreamImpl : NSObject
@property (nonatomic) IESLiveInteractDynamicContainerViewHolder dynamicContainer;
@property (nonatomic) IESLiveInteractDynamicSeatAnimateJSBHandler seatAnimateHandler;
@property (nonatomic) UIView preStreamContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)asyncHandleUpdateJSBEvent:type:extra:container:completion:;
- (void)clearDynamicContainer;
- (void)clearJSBHandlers;
- (void)didSetAttachingDIContext;
- (void)interactGuestListChanged;
- (void)invokeEvent:params:;
- (void)loadDynamicContainer;
- (void)onUserEnterLiveRoom:;
- (void)onUserQuitLiveRoom;
- (id)preStreamContainer;
- (void)registerJSBHandler;
- (id)seatAnimateHandler;
- (void)setDynamicContainer:;
- (void)setPreStreamContainer:;
- (void)setSeatAnimateHandler:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)reset;
- (void)setData:;
- (id)dynamicContainer;
@end
