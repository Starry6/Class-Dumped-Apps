@interface AWECodeGenAdditionalCommentModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenCommentModel currentCommentModel;
@property (nonatomic) NSInteger commentUnvisible;
@property (nonatomic) BOOL isReplyComment;
@property (nonatomic) AWECodeGenCommentModel level1CommentModel;
@property (nonatomic) NSString parentId;
- (id)currentCommentModel;
- (int)commentUnvisible;
- (id)level1CommentModel;
- (void)setCurrentCommentModel:;
- (void)setCommentUnvisible:;
- (BOOL)isReplyComment;
- (void)setIsReplyComment:;
- (void)setLevel1CommentModel:;
- (void).cxx_destruct;
- (id)parentId;
- (void)setParentId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
