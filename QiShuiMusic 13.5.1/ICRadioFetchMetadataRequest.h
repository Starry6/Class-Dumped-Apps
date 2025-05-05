@interface ICRadioFetchMetadataRequest : NSObject
@property (nonatomic) NSArray storeAdamIDs;
@property (nonatomic) ICStoreRequestContext storeRequestContext;
@property (nonatomic) NSData timedMetadataData;
@property (nonatomic) q qualityOfService;
- (void)setQualityOfService:;
- (id)init;
- (void)performWithResponseHandler:;
- (long long)qualityOfService;
- (void).cxx_destruct;
- (id)storeRequestContext;
- (void)setStoreRequestContext:;
- (id)copyWithZone:;
- (id)storeAdamIDs;
- (void)setStoreAdamIDs:;
- (id)timedMetadataData;
- (void)setTimedMetadataData:;
@end
