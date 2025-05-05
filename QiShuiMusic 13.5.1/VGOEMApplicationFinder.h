@interface VGOEMApplicationFinder : NSObject
@property (nonatomic) NSSet disabledAppIdentifiers;
@property (nonatomic) NSDictionary allowlist;
@property (nonatomic) NSMutableDictionary applications;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <VGOEMApplicationFinderUpdates> delegate;
- (void)valueChangedForGEOConfigKey:;
- (id)init;
- (id)_allowlistPayload;
- (void)dealloc;
- (void)applicationsDidInstall:;
- (void)applicationsDidUninstall:;
- (void)setApplications:;
- (id)applications;
- (void)setDelegate:;
- (void)setDisabledAppIdentifiers:;
- (id)_applicationRecordForBundleIdentifier:;
- (void)findOEMApplications;
- (void)setAllowlist:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)_removeOEMApplicationForBundleIdentifier:;
- (BOOL)_addOEMApplicationForApplicationRecordIfNeeded:;
- (id)disabledAppIdentifiers;
- (id)allowlist;
@end
