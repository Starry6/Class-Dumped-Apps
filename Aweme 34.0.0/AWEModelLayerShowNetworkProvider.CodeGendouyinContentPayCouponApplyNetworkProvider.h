@interface AWEModelLayerShowNetworkProvider.CodeGendouyinContentPayCouponApplyNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString productId;
@property (nonatomic) NSNumber currentEpisode;
@property (nonatomic) NSNumber mixId;
@property (nonatomic) NSNumber itemId;
@property (nonatomic) NSString clientAbParams;
@property (nonatomic) NSNumber entCouponApplyScene;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)mixId;
- (void)setMixId:;
- (id)clientAbParams;
- (void)setClientAbParams:;
- (id)entCouponApplyScene;
- (void)setEntCouponApplyScene:;
- (id)initWithProductId:;
- (id)init;
- (id)productId;
- (void).cxx_destruct;
- (Class)modelClass;
- (void)setProductId:;
- (id)itemId;
- (id)currentEpisode;
- (void)setCurrentEpisode:;
- (void)setItemId:;
+ (id)businessURI;
@end
