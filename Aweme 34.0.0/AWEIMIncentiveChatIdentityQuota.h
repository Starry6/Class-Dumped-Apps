@interface AWEIMIncentiveChatIdentityQuota : NSObject
@property (nonatomic) NSInteger quota;
@property (nonatomic) NSInteger usedQuota;
@property (nonatomic) NSInteger inviteQuota;
@property (nonatomic) NSInteger alreadyInviteQuota;
@property (nonatomic) NSInteger newQuota;
@property (nonatomic) q quotaUpdateTime;
@property (nonatomic) q identityLastUpdateTime;
@property (nonatomic) NSString identityID;
- (int)usedQuota;
- (int)alreadyInviteQuota;
- (int)inviteQuota;
- (id)dictionaryRawData;
- (long long)quotaUpdateTime;
- (void)setUsedQuota:;
- (long long)identityLastUpdateTime;
- (void)setInviteQuota:;
- (void)setAlreadyInviteQuota:;
- (int)newQuota;
- (void)setNewQuota:;
- (void)setQuotaUpdateTime:;
- (void)setIdentityLastUpdateTime:;
- (void).cxx_destruct;
- (void)setQuota:;
- (id)initWithDictionary:;
- (int)quota;
- (id)identityID;
- (void)setIdentityID:;
@end
