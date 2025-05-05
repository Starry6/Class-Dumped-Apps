@interface MIDriverKitBundle : MIExecutableBundle
- (id)minimumOSVersion;
- (id)initWithBundleParentURL:parentSubdirectory:bundleName:error:;
- (BOOL)validateBundleMetadataWithError:;
- (id)currentOSVersionForValidationWithError:;
+ (id)bundlesInParentBundle:subDirectory:matchingPredicate:error:;
@end
