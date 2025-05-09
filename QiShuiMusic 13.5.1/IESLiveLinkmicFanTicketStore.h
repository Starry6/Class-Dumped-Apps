@interface IESLiveLinkmicFanTicketStore : IESLiveBaseFanTicketStore
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) NSMutableDictionary map;
@property (nonatomic) NSMutableDictionary modelDict;
@property (nonatomic) NSArray guestList;
@property (nonatomic) <IESLiveInteractionLayoutRouter> layoutRouter;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) BOOL guestCanAcceptGift;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bizStoreDidChangeGuestCanAcceptGift:;
- (void)bizStoreDidChangedFromLayout:toLayout:;
- (void)bizStoreDidUpdatedGuestList:;
- (void)bizStoreMount;
- (id)disposable;
- (BOOL)fanTicketHiddenWithUserModel:;
- (id)guestList;
- (id)layoutRouter;
- (id)modelDict;
- (id)observeFanTicketWithUserModel:;
- (id)roomModel;
- (void)setDisposable:;
- (void)setGuestList:;
- (void)setLayoutRouter:;
- (void)setModelDict:;
- (void)setRoomModel:;
- (void)updateFanticketObserver:;
- (void)updateFanticketWithUserModel:;
- (BOOL)withoutAnimationWithModel:withUserModel:withFirst:;
- (void).cxx_destruct;
- (id)map;
- (void)setMap:;
@end
