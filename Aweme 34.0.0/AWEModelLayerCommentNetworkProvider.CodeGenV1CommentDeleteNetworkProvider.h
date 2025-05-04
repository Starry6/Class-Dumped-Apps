@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString cid;
@property (nonatomic) NSNumber serviceId;
@property (nonatomic) NSNumber commentScene;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)commentScene;
- (void)setCommentScene:;
- (id)cid;
- (id)init;
- (void)setServiceId:;
- (id)serviceId;
- (void).cxx_destruct;
- (Class)modelClass;
- (void)setCid:;
+ (id)businessURI;
@end
