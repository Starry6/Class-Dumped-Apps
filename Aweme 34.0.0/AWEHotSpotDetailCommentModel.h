@interface AWEHotSpotDetailCommentModel : AWEBaseApiModel
@property (nonatomic) NSString commentID;
@property (nonatomic) NSString relatedAwemeID;
@property (nonatomic) q diggCount;
@property (nonatomic) AWEHotSpotDetailUserModel userInfoModel;
@property (nonatomic) NSString commentText;
@property (nonatomic) BOOL userDigged;
- (long long)diggCount;
- (id)userInfoModel;
- (void)setUserInfoModel:;
- (id)commentID;
- (BOOL)userDigged;
- (void)setCommentID:;
- (void)setUserDigged:;
- (void)setDiggCount:;
- (id)relatedAwemeID;
- (void)setRelatedAwemeID:;
- (void).cxx_destruct;
- (void)setCommentText:;
- (id)commentText;
+ (id)userInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
