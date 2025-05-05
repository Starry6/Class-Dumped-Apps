@interface ICUserVerificationRequest : NSObject
@property (nonatomic) q qualityOfService;
@property (nonatomic) ICStoreRequestContext storeRequestContext;
@property (nonatomic) ICUserVerificationContext verificationContext;
- (void)setQualityOfService:;
- (void)performWithResponseHandler:;
- (long long)qualityOfService;
- (void).cxx_destruct;
- (id)storeRequestContext;
- (void)setStoreRequestContext:;
- (id)copyWithZone:;
- (id)verificationContext;
- (id)initWithVerificationContext:;
@end
