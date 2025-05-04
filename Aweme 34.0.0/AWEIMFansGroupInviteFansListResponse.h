@interface AWEIMFansGroupInviteFansListResponse : IESIMBaseApiModel
@property (nonatomic) q remainingInvitableCount;
@property (nonatomic) NSArray fansInfoList;
@property (nonatomic) BOOL isBackUp;
- (BOOL)isBackUp;
- (void)setIsBackUp:;
- (id)fansInfoList;
- (long long)remainingInvitableCount;
- (void)setRemainingInvitableCount:;
- (void)setFansInfoList:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
