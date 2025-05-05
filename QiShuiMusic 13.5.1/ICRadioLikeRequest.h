@interface ICRadioLikeRequest : NSObject
@property (nonatomic) q storeAdamID;
@property (nonatomic) q likeState;
@property (nonatomic) NSString stationHash;
@property (nonatomic) q stationID;
@property (nonatomic) NSString stationStringID;
@property (nonatomic) q qualityOfService;
@property (nonatomic) ICStoreRequestContext requestContext;
- (void)setQualityOfService:;
- (void)performWithResponseHandler:;
- (long long)qualityOfService;
- (void)setRequestContext:;
- (long long)storeAdamID;
- (id)requestContext;
- (void).cxx_destruct;
- (id)initWithRequestContext:;
- (id)copyWithZone:;
- (long long)stationID;
- (id)stationHash;
- (id)stationStringID;
- (void)setStationStringID:;
- (void)setStationHash:;
- (void)setStationID:;
- (void)setStoreAdamID:;
- (long long)likeState;
- (void)setLikeState:;
@end
