@interface AWENearbyTransformerModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createTransformerViewControllerWithPageContext:;
- (id)createTransformerSettingsManangerWithPageContext:;
- (void)handleByteSyncMsg:;
- (void)getValidNearbySettingsCacheWithRowType:pageType:strategy:complete:;
- (void)getValidNearbySettingsCacheWithRowType:pageType:strategy:expiredDuration:complete:;
- (void)prefechTransformerGeckoResourceIfNeeded;
@end
