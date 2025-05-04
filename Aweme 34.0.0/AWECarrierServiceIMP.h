@interface AWECarrierServiceIMP : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)availabeCarrierService;
- (void)requestSecurityPhoneNumber:enterMethod:completion:;
- (void)requestTokenWithCarrier:completion:;
- (void)requestTokenDictWithCarrier:completion:;
- (BOOL)telecomFromV2;
- (id)appIdForCarrier:;
- (void)startup;
@end
