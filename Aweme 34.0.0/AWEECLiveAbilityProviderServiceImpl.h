@interface AWEECLiveAbilityProviderServiceImpl : NSObject
@property (nonatomic) <IESECLiveAbilityProviderService> liveAbilityProviderService;
@property (nonatomic) <IESECLiveAbilityProviderBizDelegate> fakeDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveAbilityProviderService;
- (id)fakeDelegate;
- (void)setFakeDelegate:;
- (id)initWithProviderService:andFakeDelegate:;
- (id)DIContext;
- (void)setLiveAbilityProviderService:;
- (void).cxx_destruct;
+ (id)liveAbilityProviderService:;
@end
