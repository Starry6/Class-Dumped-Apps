@interface IESLiveRevenueInteractPKPlayAdapter : NSObject
@property (nonatomic) <IESLivePKProvider> provider;
- (void)addPlayTimes;
- (id)initWithDIContext:;
- (void)resetActionFromSource;
- (void)setActionFromSource:;
- (void)trackBattleInviteePanelShowIsOnceMore:inviteMode:extra:;
- (void)trackPKEndOnPlayDestory;
- (void)trackPKEndWithReason:isCutOff:isInitiator:;
- (void)trackPKStartFromInteracting:;
- (void)trackPlayConnectionInvited:isOnceMore:inviteMode:extra:;
- (void)trackPunishEnd;
- (void)setProvider:;
- (id)provider;
- (void).cxx_destruct;
@end
