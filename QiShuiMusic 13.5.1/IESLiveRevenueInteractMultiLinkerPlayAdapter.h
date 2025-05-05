@interface IESLiveRevenueInteractMultiLinkerPlayAdapter : NSObject
@property (nonatomic) <IESLiveMultiLinkerProvider> provider;
- (void)addPlayTimes;
- (id)initWithDIContext:;
- (void)resetActionFromSource;
- (void)setActionFromSource:;
- (void)trackBattleInviteePanelShowIsOnceMore:inviteMode:extra:;
- (void)trackPKEndOnPlayDestory;
- (void)trackPKEndWithReason:isCutOff:isInitiator:;
- (void)trackPKStartFromInteracting:;
- (void)trackPlayConnectionInvited:isOnceMore:inviteMode:extra:;
- (void)setProvider:;
- (id)provider;
- (void).cxx_destruct;
@end
