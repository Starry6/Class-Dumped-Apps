@interface PLPhotoKitVariationCache : NSObject
@property (nonatomic) NSURL cacheURL;
- (id)initWithPathManager:;
- (unsigned long long)purgeAll;
- (id)initWithCacheURL:;
- (void).cxx_destruct;
- (id)cacheURL;
- (id)gatingResultForVariationType:assetIdentifier:;
- (void)saveAnalysisResult:assetIdentifier:;
- (void)saveAnalysisResult:assetIdentifier:sourceType:;
- (id)analysisResultForAssetIdentifier:;
- (id)analysisResultForAssetIdentifier:sourceType:;
- (void)savePortraitEffectSettings:sourceType:assetIdentifier:;
- (void)savePortraitEffectSettings:assetIdentifier:;
- (id)portraitEffectSettingsForAssetIdentifier:sourceType:;
- (id)portraitEffectSettingsForAssetIdentifier:;
- (void)saveGatingResult:forVariationType:assetIdentifier:sourceType:;
- (void)saveGatingResult:forVariationType:assetIdentifier:;
- (id)gatingResultForVariationType:assetIdentifier:sourceType:;
- (BOOL)_performChangesForAssetIdentifier:sourceType:changesBlock:;
- (unsigned long long)evictIfNeeded;
- (BOOL)deleteCacheForAssetIdentifier:sourceType:;
- (BOOL)deleteCacheForAssetIdentifier:;
- (id)_fileURLWithIdentifier:sourceType:pathExtension:;
- (BOOL)_writeInfo:atURL:;
- (id)_readInfoForURL:;
- (void)_saveToMemoryCache:forFileURL:fileSize:;
- (BOOL)_removeCachesForURL:;
@end
