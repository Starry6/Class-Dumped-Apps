@interface AWEIMIncentiveChatPrivateTicketData : NSObject
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double expireTime;
@property (nonatomic) q drawQuota;
@property (nonatomic) q usedDrawQuota;
@property (nonatomic) NSString userID;
@property (nonatomic) NSArray ticketDetailList;
@property (nonatomic) NSDictionary rawDict;
- (void)setRawDict:;
- (id)rawDict;
- (long long)drawQuota;
- (id)ticketDetailList;
- (long long)usedDrawQuota;
- (void)setDrawQuota:;
- (void)setUsedDrawQuota:;
- (void)setTicketDetailList:;
- (id)userID;
- (void)setLastUpdateTime:;
- (void).cxx_destruct;
- (double)lastUpdateTime;
- (id)initWithDictionary:;
- (void)setUserID:;
- (double)expireTime;
- (void)setExpireTime:;
@end
