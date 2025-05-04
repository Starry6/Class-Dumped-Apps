@interface AWEThirdPartyAppIdManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)forceSetupThirdPartyAccount;
+ (void)setupThirdPartyAccount;
+ (void)asyncSetupThirdPartyAccountWithCompletion:;
+ (void)preSetupThirdPartyAccountAsynchronous;
+ (void)_setupThirdPartyAccountAsynchronous:completion:;
@end
