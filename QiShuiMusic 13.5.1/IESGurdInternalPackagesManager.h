@interface IESGurdInternalPackagesManager : NSObject
+ (id)allInternalPackageMetaInfos;
+ (void)clearInternalCacheForAccessKey:channel:;
+ (void)clearInternalPackageForAccessKey:channel:;
+ (void)clearInternalPackagesIfNeeded;
+ (long long)dataAccessPolicyForAccessKey:channel:;
+ (void)didAccessInternalPackageWithAccessKey:channel:path:dataAccessPolicy:;
+ (unsigned long long)internalPackageIdForAccessKey:channel:;
+ (void)loadLocalMetaInfos;
+ (void)loadLocalMetaInfosIfNeeded;
+ (id)metaInfosDictionary;
+ (void)saveInternalPackageMetaInfo:;
+ (void)saveInternalPackageMetaInfosToLocal;
+ (void)setMetaInfosDictionary:;
+ (BOOL)shouldClearInternalPackageWithMetaInfo:;
+ (void)updateDataAccessPolicy:accessKey:channel:;
+ (void)setup;
@end
