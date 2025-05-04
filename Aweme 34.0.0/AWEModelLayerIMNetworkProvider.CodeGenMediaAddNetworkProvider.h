@interface AWEModelLayerIMNetworkProvider.CodeGenMediaAddNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSNumber convShortId;
@property (nonatomic) NSNumber userId;
@property (nonatomic) NSString albumId;
@property (nonatomic) NSNumber sourceType;
@property (nonatomic) NSString sourceInfo;
@property (nonatomic) NSNumber deviceId;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)convShortId;
- (id)initWithSourceType:sourceInfo:userId:albumId:convShortId:;
- (void)setConvShortId:;
- (id)albumId;
- (void)setAlbumId:;
- (void)setSourceType:;
- (void)setSourceInfo:;
- (id)sourceType;
- (id)deviceId;
- (id)init;
- (id)userId;
- (id)sourceInfo;
- (void)setDeviceId:;
- (void).cxx_destruct;
- (void)setUserId:;
- (Class)modelClass;
+ (id)businessURI;
@end
