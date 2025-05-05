@interface AWEIMShareChallengeMessage : AWEIMMessage
@property (nonatomic) NSString title;
@property (nonatomic) q userCount;
@property (nonatomic) NSArray coverURLArray;
@property (nonatomic) NSString challengeID;
@property (nonatomic) NSString pushDetail;
@property (nonatomic) BOOL isCommerce;
- (id)coverURLArray;
- (id)getContentDict;
- (id)initWithContentDict:;
- (BOOL)isCommerce;
- (id)pushDetail;
- (void)setCoverURLArray:;
- (void)setIsCommerce:;
- (void)setPushDetail:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)userCount;
- (void)setUserCount:;
- (id)challengeID;
- (void)setChallengeID:;
@end
