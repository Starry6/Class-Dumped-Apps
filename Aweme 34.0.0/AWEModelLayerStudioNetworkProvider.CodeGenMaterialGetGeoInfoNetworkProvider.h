@interface AWEModelLayerStudioNetworkProvider.CodeGenMaterialGetGeoInfoNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSNumber longitude;
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSString lang;
@property (nonatomic) NSArray opts;
@property (nonatomic) NSString appid;
@property (nonatomic) NSString deviceId;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)opts;
- (void)setOpts:;
- (id)deviceId;
- (id)init;
- (void)setDeviceId:;
- (void)setLatitude:;
- (id)latitude;
- (void)setLongitude:;
- (id)longitude;
- (void).cxx_destruct;
- (Class)modelClass;
- (id)appid;
- (void)setAppid:;
- (id)lang;
- (void)setLang:;
+ (id)businessURI;
@end
