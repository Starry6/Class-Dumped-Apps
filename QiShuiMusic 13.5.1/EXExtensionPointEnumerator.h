@interface EXExtensionPointEnumerator : NSEnumerator
@property (nonatomic) <EXEnumeratorConfig> config;
@property (nonatomic) NSDictionary extensionPoints;
@property (nonatomic) NSEnumerator extensionPointsKeyEnumerator;
@property (nonatomic) _EXExtensionPoint currentExtensionPoint;
@property (nonatomic) BOOL validateExtensionPoints;
@property (nonatomic) NSString currentIdentifier;
@property (nonatomic) NSMutableDictionary currentSDKDictionaryForPlatform;
- (id)nextObject;
- (void).cxx_destruct;
- (id)config;
- (id)initWithCacheURLs:config:;
- (id)initWithSDKDictionary:config:;
- (id)initWithSDKDictionary:urls:config:;
- (id)translateXPCCacheDictionary:;
- (id)synthesizeNSExtensionKeysInDictionary:identifier:;
- (id)flattenEXExtensionPointConfigurationInDictionary:identifier:;
- (BOOL)validateExtensionPointIdentifier:sdkDictionary:;
- (BOOL)validateExtensionPoints;
- (id)extensionPoints;
- (id)extensionPointsKeyEnumerator;
- (id)currentExtensionPoint;
- (id)currentIdentifier;
- (id)currentSDKDictionaryForPlatform;
+ (void)enumerateExtensionPointsInDirectoryAtURL:block:;
+ (id)translateAppexptDictionary:definitionURL:isCatalyst:;
@end
