@interface IESLiveGuestBattleFanTicketStore : IESLiveBaseFanTicketStore
@property (nonatomic) NSArray guestList;
@property (nonatomic) HTSLiveGuestBattleInfo battleInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL guestCanAcceptGift;
- (id)battleInfo;
- (void)bizStoreDidChangeGuestCanAcceptGift:;
- (void)bizStoreDidUpdatedGuestList:;
- (void)bizStoreMount;
- (BOOL)fanticketHiddenWithResult:;
- (id)getFuzzyUpgradeStr:;
- (id)guestList;
- (void)handleGuestBattleMessage:;
- (void)handleGuestBattleScoreMessage:;
- (void)interactionPlaymodeDidEnd:;
- (void)interactionPlaymodeDidStart:;
- (void)setBattleInfo:;
- (void)setGuestList:;
- (BOOL)shouldUseRealScore:;
- (void)updateBattleRoleIconWithRole:level:uid:;
- (void)updateScoreIfNeed;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
