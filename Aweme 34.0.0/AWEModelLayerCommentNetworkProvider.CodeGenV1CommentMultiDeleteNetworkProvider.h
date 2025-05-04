@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentMultiDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString cids;
@property (nonatomic) NSNumber deleteGroupType;
@property (nonatomic) NSNumber needBlock;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)cids;
- (void)setCids:;
- (id)deleteGroupType;
- (void)setDeleteGroupType:;
- (id)needBlock;
- (void)setNeedBlock:;
- (id)init;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
