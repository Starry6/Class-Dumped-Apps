@interface AWEModelLayerIMNetworkProvider.CodeGenUserSettingInfoNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSString secUid;
@property (nonatomic) NSArray keyList;
- (id)secUid;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void)setSecUid:;
- (void)setKeyList:;
- (id)init;
- (id)keyList;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
