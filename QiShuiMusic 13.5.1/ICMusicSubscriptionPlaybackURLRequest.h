@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest
@property (nonatomic) NSString assetSourceStorefrontID;
@property (nonatomic) NSData leaseCertificateData;
@property (nonatomic) NSData leaseAssetIDData;
@property (nonatomic) NSString cloudUniversalLibraryID;
@property (nonatomic) NSString playbackAuthorizationToken;
@property (nonatomic) BOOL delegatedPlayback;
@property (nonatomic) q requestType;
@property (nonatomic) Q storeCloudID;
@property (nonatomic) q storePurchasedAdamID;
@property (nonatomic) q storeSubscriptionAdamID;
- (long long)requestType;
- (id)cloudUniversalLibraryID;
- (void)setRequestType:;
- (id)playbackAuthorizationToken;
- (void)setPlaybackAuthorizationToken:;
- (void).cxx_destruct;
- (id)description;
- (id)_actionType;
- (long long)storePurchasedAdamID;
- (long long)storeSubscriptionAdamID;
- (void)setCloudUniversalLibraryID:;
- (void)setStoreSubscriptionAdamID:;
- (unsigned long long)storeCloudID;
- (void)setStoreCloudID:;
- (void)setStorePurchasedAdamID:;
- (id)assetSourceStorefrontID;
- (void)setAssetSourceStorefrontID:;
- (BOOL)isDelegatedPlayback;
- (void)setDelegatedPlayback:;
- (id)_analyticSignature;
- (void)buildStoreURLRequestWithURLRequest:builderProperties:completionHandler:;
- (void)_populateItemIdentifiers:;
- (id)leaseCertificateData;
- (void)setLeaseCertificateData:;
- (id)leaseAssetIDData;
- (void)setLeaseAssetIDData:;
@end
