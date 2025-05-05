@interface ICAuthorizeMachineRequest : NSObject
@property (nonatomic) NSString keybagPath;
@property (nonatomic) q qualityOfService;
@property (nonatomic) NSString reason;
@property (nonatomic) ICStoreRequestContext requestContext;
@property (nonatomic) NSData tokenData;
- (void)setQualityOfService:;
- (void)performWithResponseHandler:;
- (long long)qualityOfService;
- (void)setRequestContext:;
- (id)reason;
- (void)setReason:;
- (void)setTokenData:;
- (id)requestContext;
- (void).cxx_destruct;
- (id)tokenData;
- (id)initWithRequestContext:;
- (id)copyWithZone:;
- (void)setKeybagPath:;
- (id)keybagPath;
@end
