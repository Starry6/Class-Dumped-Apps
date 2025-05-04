@interface AWEModelLayerIMNetworkProvider.CodeGenShareMixPhotoNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSDictionary shareInfo;
@property (nonatomic) NSString idempotentId;
@property (nonatomic) NSDictionary track;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)idempotentId;
- (void)setIdempotentId:;
- (id)init;
- (id)shareInfo;
- (void).cxx_destruct;
- (void)setShareInfo:;
- (Class)modelClass;
- (id)track;
- (void)setTrack:;
+ (id)businessURI;
@end
