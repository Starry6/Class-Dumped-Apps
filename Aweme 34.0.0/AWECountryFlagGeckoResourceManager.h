@interface AWECountryFlagGeckoResourceManager : NSObject
@property (nonatomic) BOOL isInternalPackage;
@property (nonatomic) NSString downloadPackageId;
@property (nonatomic) NSString internalPackageId;
@property (nonatomic) NSDictionary settingsJson;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)gurdDidFinishDownloadingPackageForAccessKey:channel:packageInfo:;
- (void)gurdDidFinishApplyingPackageForAccessKey:channel:succeed:error:;
- (void)setIsInternalPackage:;
- (id)settingsJson;
- (BOOL)isInternalPackage;
- (id)downloadPackageId;
- (id)internalPackageId;
- (void)setInternalPackageId:;
- (BOOL)isCountryFlagGeckoResourceWithAccessKey:channel:;
- (void)setDownloadPackageId:;
- (id)settingJsonWithKey:;
- (id)getAllCountryFlagKeys;
- (id)getResourceVersion;
- (id)getCountryFlagWithKey:;
- (void)setSettingsJson:;
- (id)init;
- (void).cxx_destruct;
- (void)activeResources;
+ (id)sharedInstance;
@end
