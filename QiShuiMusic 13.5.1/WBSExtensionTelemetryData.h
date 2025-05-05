@interface WBSExtensionTelemetryData : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL enabled;
@property (nonatomic) q manifestVersion;
@property (nonatomic) BOOL allWebsitesPermissionLevel;
@property (nonatomic) Q websitesGrantedAccessCount;
@property (nonatomic) Q websitesDeniedAccessCount;
@property (nonatomic) BOOL canOverrideNewTabPage;
- (BOOL)enabled;
- (id)identifier;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (long long)manifestVersion;
- (void)setManifestVersion:;
- (void)setAllWebsitesPermissionLevel:;
- (void)setCanOverrideNewTabPage:;
- (void)setWebsitesDeniedAccessCount:;
- (void)setWebsitesGrantedAccessCount:;
- (BOOL)allWebsitesPermissionLevel;
- (unsigned long long)websitesGrantedAccessCount;
- (unsigned long long)websitesDeniedAccessCount;
- (BOOL)canOverrideNewTabPage;
@end
