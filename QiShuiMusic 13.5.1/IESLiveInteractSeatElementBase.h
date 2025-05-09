@interface IESLiveInteractSeatElementBase : NSObject
@property (nonatomic) BOOL isMounted;
@property (nonatomic) Q currentUserRole;
@property (nonatomic) Q currentScene;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) q seatIndex;
@property (nonatomic) Q seatType;
@property (nonatomic) IESLiveInteractSeatElementLoader elementLoader;
@property (nonatomic) IESLiveInteractSeatElementMultiCaster multiCaster;
@property (nonatomic) IESLiveBigPartyGuestInfoView bigPartyGuestInfoView;
@property (nonatomic) IESLiveBigPartyGuestInfoViewModel bigPartyViewModel;
@property (nonatomic) IESLiveAudioSeatView audioSeatView;
@property (nonatomic) IESLiveAudioSeatViewModel audioSeatViewModel;
@property (nonatomic) <IESLiveInteractUserModel> userModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)currentUserRole;
- (void)setMultiCaster:;
- (id)audioSeatView;
- (id)audioSeatViewModel;
- (id)bigPartyGuestInfoView;
- (id)bigPartyViewModel;
- (id)dynamicItemId;
- (void)dynamicResetItem;
- (void)dynamicUpdateItemInfo:;
- (void)elementLayoutBaseUI;
- (id)elementLoader;
- (void)elementMount;
- (void)elementSeatTypeDidChanged;
- (void)elementUnmount;
- (id)multiCaster;
- (long long)seatIndex;
- (unsigned long long)seatType;
- (void)setAudioSeatView:;
- (void)setAudioSeatViewModel:;
- (void)setBigPartyGuestInfoView:;
- (void)setBigPartyViewModel:;
- (void)setCurrentScene:;
- (void)setCurrentUserRole:;
- (void)setElementLoader:;
- (void)setEventContext:;
- (void)setIsMounted:;
- (void)setSeatIndex:;
- (void)setSeatType:;
- (void)setUserModel:;
- (unsigned long long)currentScene;
- (id)userModel;
- (void).cxx_destruct;
- (id)eventContext;
- (id)room;
- (void)setRoom:;
- (BOOL)isMounted;
@end
