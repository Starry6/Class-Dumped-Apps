@interface PLEmailAddressManager : NSObject
- (id)assetsdClient;
- (id)plistPath;
- (void).cxx_destruct;
- (id)initWithPathManager:lazyAssetsdClient:;
- (void)_loadDictionariesIfNeeded;
- (id)keyForEmailAddress:;
- (id)emailAddressForKey:;
@end
