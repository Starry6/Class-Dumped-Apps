@interface ICSuzeLeaseRequest : NSObject
@property (nonatomic) NSData clientData;
@property (nonatomic) NSString leaseID;
@property (nonatomic) q mediaType;
@property (nonatomic) q qualityOfService;
@property (nonatomic) ICStoreRequestContext requestContext;
@property (nonatomic) q requestType;
- (long long)requestType;
- (void)setQualityOfService:;
- (long long)mediaType;
- (void)performWithResponseHandler:;
- (long long)qualityOfService;
- (id)requestContext;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)clientData;
- (id)leaseID;
- (id)initWithRequestContext:requestType:leaseID:mediaType:clientData:;
@end
