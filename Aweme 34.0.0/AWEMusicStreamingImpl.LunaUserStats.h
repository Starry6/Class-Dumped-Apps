@interface AWEMusicStreamingImpl.LunaUserStats : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q countAllLiked;
@property (nonatomic) q countFollowing;
@property (nonatomic) q countFollowingFromLuna;
@property (nonatomic) q countFollowerFromLuna;
@property (nonatomic) _TtC21AWEMusicStreamingImpl26LunaAllCommentsLikedDetail allCommentsLikedDetail;
- (long long)countAllLiked;
- (void)setCountAllLiked:;
- (long long)countFollowing;
- (void)setCountFollowing:;
- (long long)countFollowingFromLuna;
- (void)setCountFollowingFromLuna:;
- (long long)countFollowerFromLuna;
- (void)setCountFollowerFromLuna:;
- (id)allCommentsLikedDetail;
- (void)setAllCommentsLikedDetail:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)allCommentsLikedDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
