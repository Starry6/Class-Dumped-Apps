@interface IESLiveCompetitionFanTicketStore : IESLiveBaseFanTicketStore
@property (nonatomic) NSArray guestList;
@property (nonatomic) BOOL guestCanAcceptGift;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bizStoreDidUpdatedGuestList:;
- (void)bizStoreMount;
- (id)guestList;
- (void)setGuestList:;
- (BOOL)shouldUpdateScoreWithScoreInfo:user:;
- (void)updateFanTicketViewWithScoreInfo:quickInteract:withoutAnimation:;
- (void).cxx_destruct;
@end
