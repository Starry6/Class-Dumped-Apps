@interface AWEIMFansGroupInviteFansListResponse : IESIMBaseApiModel
@property (nonatomic) q remainingInvitableCount;
@property (nonatomic) NSArray fansInfoList;
- (id)fansInfoList;
- (long long)remainingInvitableCount;
- (void)setFansInfoList:;
- (void)setRemainingInvitableCount:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
