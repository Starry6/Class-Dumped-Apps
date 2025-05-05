@interface PHUserFeedbackCalculator : NSObject
@property (nonatomic) PHPhotoLibrary photoLibrary;
@property (nonatomic) PHUserFeedbackDataCache dataCache;
- (id)photoLibrary;
- (id)initWithPhotoLibrary:;
- (BOOL)_hasNegativeFeedback:;
- (id)initWithDataCache:;
- (id)userFeedbackTypeByPersonUUIDForPersonUUIDs:;
- (double)scoreForKeyAssetUUID:personsUUIDsInKeyAsset:memoryFeatures:;
- (double)scoreForAssetUUIDs:personsUUIDsByAssetUUIDs:;
- (double)_scoreForPersonsInAssetsForUUIDs:keyAssetUUID:personsUUIDsByAssetUUIDs:;
- (double)_adjustScore:shouldDowngrade:;
- (id)_uniqueFeedbackTypesForPersonUUIDs:;
- (id)memoryFeaturesWithNegativeFeedbackForMemoryFeatures:;
- (double)scoreForAssetUUIDs:keyAssetUUID:personsUUIDsByAssetUUIDs:memoryFeatures:;
- (void).cxx_destruct;
- (id)personUUIDsWithNegativeFeedback;
- (double)_scoreForKeyAssetWithPersonUUIDs:;
- (BOOL)_anyPersonUUIDs:matchesWithImportantPersonType:;
- (unsigned long long)userFeedbackTypeForPersonUUID:;
- (id)dataCache;
+ (BOOL)_isUserFeedbackFeatureFlagEnabled;
+ (id)descriptionForScore:;
+ (BOOL)score:meetsScoreThreshold:;
+ (id)fetchSongIdentifiersWithNegativeFeedbackWithPhotoLibrary:;
+ (id)songIdentifiersWithNegativeFeedbackForMemory:;
@end
