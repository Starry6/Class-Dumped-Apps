@interface AWEModelLayerIMNetworkProvider.CodeGenUserBaseInfoReqModel : NSObject
@property (nonatomic) NSNumber uid;
@property (nonatomic) NSString devicePlatform;
@property (nonatomic) NSNumber versionCode;
@property (nonatomic) NSNumber did;
@property (nonatomic) NSNumber appId;
@property (nonatomic) NSNumber installId;
- (id)toJSONString;
- (id)did;
- (void)setDid:;
- (id)installId;
- (void)setInstallId:;
- (id)initWithUid:devicePlatform:versionCode:did:appId:installId:;
- (void)setUid:;
- (id)init;
- (id)uid;
- (id)devicePlatform;
- (void)setDevicePlatform:;
- (id)appId;
- (void).cxx_destruct;
- (void)setAppId:;
- (void)setVersionCode:;
- (id)versionCode;
@end
