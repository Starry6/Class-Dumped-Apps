@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentSelfListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber refresh;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)refresh;
- (id)init;
- (void)setStartTime:;
- (void)setCount:;
- (void)setRefresh:;
- (id)count;
- (void).cxx_destruct;
- (id)startTime;
- (Class)modelClass;
+ (id)businessURI;
@end
