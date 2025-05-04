@interface AWEIMRecommendUserListInfoModel : IESIMBaseApiModel
@property (nonatomic) NSArray fansInfoList;
@property (nonatomic) q remainingInvitableCount;
@property (nonatomic) q inviteGroupID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q nextCursor;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)fansInfoList;
- (long long)remainingInvitableCount;
- (long long)inviteGroupID;
- (void)setInviteGroupID:;
- (void)setRemainingInvitableCount:;
- (void)setFansInfoList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)fansInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
