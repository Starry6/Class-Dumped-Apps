@interface AWEModelLayerMessageReachNetworkProvider.CodeGenV1CommonSubscribeSetNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString serviceAccountId;
@property (nonatomic) NSNumber serviceAccountSubStatus;
@property (nonatomic) NSNumber disturbStatus;
@property (nonatomic) NSString subcategorySubscribeInfos;
@property (nonatomic) NSString bizExtra;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)serviceAccountId;
- (void)setServiceAccountId:;
- (id)serviceAccountSubStatus;
- (void)setServiceAccountSubStatus:;
- (id)disturbStatus;
- (void)setDisturbStatus:;
- (id)subcategorySubscribeInfos;
- (void)setSubcategorySubscribeInfos:;
- (id)bizExtra;
- (void)setBizExtra:;
- (id)init;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
