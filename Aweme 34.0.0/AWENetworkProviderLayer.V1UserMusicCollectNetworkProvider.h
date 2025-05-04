@interface AWENetworkProviderLayer.V1UserMusicCollectNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSString scene;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString secUserId;
- (void)setSecUserId:;
- (id)secUserId;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void)setScene:;
- (id)init;
- (id)userId;
- (id)scene;
- (void).cxx_destruct;
- (void)setUserId:;
- (Class)modelClass;
+ (id)businessURI;
@end
