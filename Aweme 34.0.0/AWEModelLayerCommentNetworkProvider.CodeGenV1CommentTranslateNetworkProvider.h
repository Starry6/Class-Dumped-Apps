@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentTranslateNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString commentId;
@property (nonatomic) NSString targetLanguage;
@property (nonatomic) NSString commentText;
@property (nonatomic) NSString commentTextExtra;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void)setCommentId:;
- (id)commentId;
- (id)commentTextExtra;
- (void)setCommentTextExtra:;
- (id)initWithCommentId:targetLanguage:;
- (id)init;
- (void).cxx_destruct;
- (Class)modelClass;
- (void)setCommentText:;
- (id)commentText;
- (void)setTargetLanguage:;
- (id)targetLanguage;
+ (id)businessURI;
@end
