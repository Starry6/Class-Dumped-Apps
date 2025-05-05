@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject
@property (nonatomic) NSString assetSourceStorefrontID;
@property (nonatomic) ICStoreRequestContext requestContext;
@property (nonatomic) q qualityOfService;
@property (nonatomic) q storeSubscriptionAdamID;
- (void)setQualityOfService:;
- (id)performWithResponseHandler:;
- (long long)qualityOfService;
- (id)requestContext;
- (void).cxx_destruct;
- (long long)storeSubscriptionAdamID;
- (id)initWithRequestContext:storeSubscriptionAdamID:;
- (id)assetSourceStorefrontID;
- (void)setAssetSourceStorefrontID:;
@end
