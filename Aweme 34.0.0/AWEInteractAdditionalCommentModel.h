@interface AWEInteractAdditionalCommentModel : AWEBaseApiModel
@property (nonatomic) NSNumber mergeCount;
@property (nonatomic) AWECommentModel currentComment;
@property (nonatomic) AWECommentModel level1Comment;
@property (nonatomic) BOOL commentUnvisible;
@property (nonatomic) NSString parentID;
- (id)level1Comment;
- (BOOL)commentUnvisible;
- (id)mergeCount;
- (id)currentComment;
- (void)setCommentUnvisible:;
- (void)setMergeCount:;
- (void)setLevel1Comment:;
- (void)setCurrentComment:;
- (id)parentID;
- (void).cxx_destruct;
- (void)setParentID:;
+ (id)level1CommentJSONTransformer;
+ (id)currentCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
