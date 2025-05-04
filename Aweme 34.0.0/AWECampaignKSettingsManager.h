@interface AWECampaignKSettingsManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestSettingsByResourceType:pullback:completion:;
+ (id)sharedInstance;
@end
