@interface AWEBatManAuthService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerBatManTrackerDelegateWithContext:;
- (void)authBatManWithXPlayItem:xplayBusinessConfig:businessModel:completion:;
- (void)realNameBatManWithXPlayItem:xplayBusinessConfig:businessModel:completion:;
- (void)authCGWithXPlayItem:xplayAuthInfo:completion:;
@end
