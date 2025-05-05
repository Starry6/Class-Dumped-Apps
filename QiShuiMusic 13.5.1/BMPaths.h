@interface BMPaths : NSObject
+ (id)syncDirectory;
+ (void)setBasePathForTestingWithPath:;
+ (id)_biomeDirectoryForDomain:options:;
+ (id)_pathForTesting;
+ (id)pathForStreamType:domain:;
+ (id)_userHome;
+ (BOOL)isTestPathOverridden;
+ (id)_biomeSystemDataDirectory;
+ (id)privacyURLToString:;
+ (BOOL)pathIsManaged:domain:;
+ (id)_biomeUserDataDirectory:;
+ (id)biomeDirectoryForDomain:;
+ (id)localFlexibleStorageDirectory;
+ (id)biomeTemporaryDirectoryForDomain:;
+ (id)_systemRoot;
+ (void)unsetBasePathForTesting;
+ (id)privacyPathname:;
+ (BOOL)getServiceDomain:subpath:forPath:;
+ (id)localComputeDirectory;
+ (id)pathForStreamIdentifier:streamType:;
+ (id)basePathForTesting;
@end
