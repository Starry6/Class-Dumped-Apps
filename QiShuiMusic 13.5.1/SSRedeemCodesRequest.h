@interface SSRedeemCodesRequest : SSRequest
@property (nonatomic) NSArray redeemCodes;
@property (nonatomic) SSAuthenticationContext authenticationContext;
@property (nonatomic) BOOL headless;
@property (nonatomic) BOOL cameraRecognized;
@property (nonatomic) NSString logCorrelationKey;
@property (nonatomic) NSDictionary params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)authenticationContext;
- (void)startWithCompletionBlock:;
- (void)setAuthenticationContext:;
- (id)params;
- (BOOL)headless;
- (void)setParams:;
- (id)initWithRedeemCodes:;
- (id)redeemCodes;
- (void)startWithRedeemResponseBlock:;
- (void)setHeadless:;
- (BOOL)cameraRecognized;
- (void)setCameraRecognized:;
- (id)logCorrelationKey;
- (void)setLogCorrelationKey:;
@end
