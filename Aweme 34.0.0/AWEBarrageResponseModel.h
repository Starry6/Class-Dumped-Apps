@interface AWEBarrageResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray dataList;
@property (nonatomic) q closeFriendUserCount;
@property (nonatomic) BOOL hasCommentNow;
@property (nonatomic) q landingTabType;
- (void)setDataList:;
- (long long)closeFriendUserCount;
- (BOOL)hasCommentNow;
- (void)setCloseFriendUserCount:;
- (void)setHasCommentNow:;
- (long long)landingTabType;
- (void)setLandingTabType:;
- (void).cxx_destruct;
- (id)dataList;
+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
