@interface EXEnumerator : NSEnumerator
+ (id)config;
+ (id)extensionPointDefinitionEnumerator;
+ (id)extensionPointDefinitionEnumeratorWithSDKDictionary:;
+ (id)extensionCacheFileURLs;
+ (id)extensionPointCacheFileURLs;
+ (id)extensionPointDefinitionDirectoryURLs;
+ (id)extensionInstallDirectoryURLs;
+ (id)extensionEnumerator;
+ (id)extensionURLEnumerator;
+ (id)_extensionLiveEnumerator;
+ (id)_extensionPointLiveEnumerator;
@end
