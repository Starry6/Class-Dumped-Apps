@interface AWEIMIncentiveChatPrivateTicketDataService : HTSService
@property (nonatomic) AWEIMIncentiveChatPrivateTicketData ticketData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)p_setStorageData;
- (BOOL)p_checkTodayTicketDataIsExpire;
- (id)ticketData;
- (BOOL)p_canUpdateTicketDataWithOtherTicketRawData:;
- (id)p_storageCacheKeyWithUid:;
- (BOOL)p_checkUserHasDrawPrizeQuota;
- (void)setTicketData:;
- (void)updateTicketDataIfNeededWithOtherTicketRawData:;
- (unsigned long long)todayDrawPrizeStatus;
- (double)currentUserTicketUpdateTime;
- (BOOL)todayHasTicketWithPeerUid:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
