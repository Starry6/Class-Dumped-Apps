@interface SSInstallAttributionParamsRequest : SSRequest
@property (nonatomic) NSNumber appAdamId;
@property (nonatomic) NSString adNetworkId;
@property (nonatomic) NSNumber campaignId;
@property (nonatomic) NSString impressionId;
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) NSString attributionSignature;
@property (nonatomic) NSString originatingBundleId;
@property (nonatomic) BOOL overrideCampaignLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:;
- (id)originatingBundleId;
- (void).cxx_destruct;
- (id)timestamp;
- (id)appAdamId;
- (id)adNetworkId;
- (id)campaignId;
- (id)impressionId;
- (id)attributionSignature;
- (BOOL)overrideCampaignLimit;
- (id)initWithAppAdamId:adNetworkId:campaignId:impressionId:timestamp:attributionSignature:;
- (id)initWithAppAdamId:adNetworkId:campaignId:impressionId:timestamp:attributionSignature:originatingBundleId:;
- (id)initWithAppAdamId:adNetworkId:campaignId:impressionId:timestamp:attributionSignature:originatingBundleId:overrideCampaignLimit:;
@end
