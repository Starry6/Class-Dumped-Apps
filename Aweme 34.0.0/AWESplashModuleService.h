@interface AWESplashModuleService : HTSService
@property (nonatomic) NSMutableDictionary brandSafetyDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableAdSplash;
- (BOOL)checkIsInLivePeriod:;
- (long long)topviewMaxCacheSize;
- (id)getBrandSafetyDataWithItemId:;
- (void)removeBrandSafetyDataWithItemId:;
- (void)storeBrandSafetyDataWithItemId:data:;
- (void)splashActionWithModel:;
- (void)trackWithTag:label:value:extra:;
- (id)brandSafetyDict;
- (void)openURLSuccessfullyWithURL:adID:extra:model:complete:;
- (BOOL)openURLInApp:;
- (void)openURL:adID:extra:model:complete:;
- (void)setBrandSafetyDict:;
- (void).cxx_destruct;
@end
