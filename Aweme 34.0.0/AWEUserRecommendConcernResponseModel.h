@interface AWEUserRecommendConcernResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray recommendUserList;
@property (nonatomic) AWEFollowUserModel followAuthor;
@property (nonatomic) BOOL hasMore;
- (id)recommendUserList;
- (void)setRecommendUserList:;
- (id)followAuthor;
- (void)setFollowAuthor:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)recommendUserListJSONTransformer;
+ (id)followAuthorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
