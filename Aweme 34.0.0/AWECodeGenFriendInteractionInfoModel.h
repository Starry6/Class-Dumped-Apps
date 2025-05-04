@interface AWECodeGenFriendInteractionInfoModel : AWEBaseDataModel
@property (nonatomic) NSArray diggListModelArray;
@property (nonatomic) NSArray commentListModelArray;
@property (nonatomic) BOOL commentHasMore;
@property (nonatomic) q commentCursor;
- (id)commentListModelArray;
- (long long)commentCursor;
- (id)diggListModelArray;
- (BOOL)commentHasMore;
- (void)setCommentHasMore:;
- (void)setCommentListModelArray:;
- (void)setDiggListModelArray:;
- (void)setCommentCursor:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
