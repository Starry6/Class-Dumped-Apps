@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1DanmakuDeleteV2NetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString danmakuId;
@property (nonatomic) NSNumber userType;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)danmakuId;
- (void)setDanmakuId:;
- (id)init;
- (id)userType;
- (void).cxx_destruct;
- (Class)modelClass;
- (void)setUserType:;
+ (id)businessURI;
@end
