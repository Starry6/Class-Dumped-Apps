@interface IESLiveVerifyConfigAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needIdentityAuthenticationWithController:enterFrom:;
- (void)openLiveCertWithParams:identifyParams:faceOnly:paramsBuilder:completion:;
@end
