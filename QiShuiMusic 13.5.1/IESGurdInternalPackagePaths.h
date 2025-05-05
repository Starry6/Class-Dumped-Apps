@interface IESGurdInternalPackagePaths : NSObject
+ (id)bundlePathWithName:;
+ (id)configFilePathWithBundleName:;
+ (id)internalPackageDirectoryForAccessKey:;
+ (id)internalPackageMetaInfosPath;
+ (id)internalPackagesDirectory;
+ (id)internalRootDirectoryForAccessKey:channel:;
@end
