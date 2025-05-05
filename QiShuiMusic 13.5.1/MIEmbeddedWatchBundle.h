@interface MIEmbeddedWatchBundle : MIExecutableBundle
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL isApplicableToKnownWatchOSVersion;
- (BOOL)isPlaceholder;
- (unsigned char)bundleType;
- (BOOL)allowsAppExtensionsNotInExtensionCache;
- (id)pluginKitBundlesPerformingPlatformValidation:withError:;
- (id)pluginKitBundlesWithError:;
- (id)extensionKitBundlesPerformingPlatformValidation:withError:;
- (id)extensionKitBundlesWithError:;
- (id)currentOSVersionForValidationWithError:;
- (BOOL)isApplicableToKnownWatchOSVersion;
- (id)initWithParentBundle:parentSubdirectory:bundleName:isPlaceholder:error:;
@end
