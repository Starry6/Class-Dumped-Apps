@interface RemovableSoftwareLookupTable : NSObject
@property (nonatomic) NSDictionary bundleDictionary;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_invalidateLookupCache:;
- (id)bundleDictionary;
- (id)itemIdentifierForBundleIdentifer:;
- (void)_populateBundleDictionary;
- (id)_identifierForBundleIdentifier:;
+ (BOOL)isRestrictedAppBundleIdentifier:;
+ (id)urlForBundleIdentifier:;
+ (id)_fallbackItemIdentifier:;
+ (id)_urlForBundleIdentifier:;
@end
