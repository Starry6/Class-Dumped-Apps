@interface AWEUserCommonAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldHideNavBar;
- (BOOL)banCountryCodeViewUserInteraction;
- (BOOL)shouldNotEnterCheckNonageVerify;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (BOOL)shouldShowDouyinEntrance;
+ (unsigned long long)verifyTypeForPlatform:currentAccount:targetAccount:verifiedUids:;
@end
