@interface AWECodeGenV1CommentListReplyResponse : AWEBaseResponseModel
@property (nonatomic) NSArray commentsModelArray;
@property (nonatomic) q cursor;
@property (nonatomic) q hasMore;
@property (nonatomic) q total;
@property (nonatomic) AWECodeGenCommentUserAvatarModel userAvatarSchemaModel;
@property (nonatomic) AWECodeGenExtraModel extraModel;
@property (nonatomic) AWECodeGenCommentTranslateConfigModel translateConfigModel;
- (id)extraModel;
- (void)setExtraModel:;
- (id)translateConfigModel;
- (void)setTranslateConfigModel:;
- (id)commentsModelArray;
- (void)setCommentsModelArray:;
- (id)userAvatarSchemaModel;
- (void)setUserAvatarSchemaModel:;
- (long long)cursor;
- (void)setHasMore:;
- (long long)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
