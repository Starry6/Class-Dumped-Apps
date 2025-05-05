@interface MIAppExtensionBundle : MIExecutableBundle
@property (nonatomic) NSString validationOverrideParentBundleID;
@property (nonatomic) NSString extensionPointIdentifier;
- (id)initForTesting;
- (id)extensionPointIdentifier;
- (void).cxx_destruct;
- (Class)dataContainerClass;
- (id)minimumOSVersion;
- (id)initWithBundleParentURL:parentSubdirectory:bundleName:error:;
- (BOOL)validateBundleMetadataWithError:;
- (void)setBundleParentDirectoryURL:;
- (id)validationOverrideParentBundleID;
- (void)setValidationOverrideParentBundleID:;
- (id)dataContainerWithError:;
- (id)dataContainerCreatingIfNeeded:makeLive:created:error:;
- (BOOL)hasDotInBundleIDSuffixWithError:;
- (id)extensionCacheEntryWithError:;
@end
