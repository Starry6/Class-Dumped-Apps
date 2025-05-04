@interface AWEUserDynamicModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSArray commentList;
@property (nonatomic) NSArray likeList;
@property (nonatomic) NSArray itemIDList;
@property (nonatomic) Q userDynamicCellType;
@property (nonatomic) NSNumber likeCount;
@property (nonatomic) NSNumber dynamicTime;
- (id)aweme;
- (void)setAweme:;
- (void)setLikeCount:;
- (id)commentList;
- (void)setCommentList:;
- (id)itemIDList;
- (void)setItemIDList:;
- (id)likeList;
- (void)setLikeList:;
- (unsigned long long)userDynamicCellType;
- (void)setUserDynamicCellType:;
- (id)dynamicTime;
- (void)setDynamicTime:;
- (void).cxx_destruct;
- (id)likeCount;
+ (id)awemeJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)likeListJSONTransformer;
+ (id)userDynamicCellTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
