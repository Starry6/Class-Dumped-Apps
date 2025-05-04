@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentTopSaveNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSString awemeId;
@property (nonatomic) NSString commentId;
@property (nonatomic) NSNumber op;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void)setAwemeId:;
- (void)setCommentId:;
- (id)awemeId;
- (id)commentId;
- (id)init;
- (void).cxx_destruct;
- (Class)modelClass;
- (id)op;
- (void)setOp:;
+ (id)businessURI;
@end
