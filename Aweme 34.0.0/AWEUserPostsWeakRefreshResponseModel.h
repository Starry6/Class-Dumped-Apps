@interface AWEUserPostsWeakRefreshResponseModel : AWEBaseApiModel
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) BOOL needForceRefresh;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray weakPosts;
@property (nonatomic) NSArray collectionWeakPosts;
@property (nonatomic) NSArray unreadNoticeModelList;
- (id)secUserID;
- (void)setSecUserID:;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setNeedForceRefresh:;
- (BOOL)needForceRefresh;
- (id)weakPosts;
- (id)unreadNoticeModelList;
- (id)collectionWeakPosts;
- (void)setWeakPosts:;
- (void)setCollectionWeakPosts:;
- (void)setUnreadNoticeModelList:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
+ (id)awemeListJSONTransformer;
+ (id)weakPostsJSONTransformer;
+ (id)collectionWeakPostsJSONTransformer;
+ (id)unreadNoticeModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
