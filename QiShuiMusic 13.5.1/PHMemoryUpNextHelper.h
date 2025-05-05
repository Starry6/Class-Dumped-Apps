@interface PHMemoryUpNextHelper : NSObject
+ (id)fetchFallbackMemoriesForMemory:targetCount:memoryLocalIdentifiersToAvoid:error:;
+ (id)fetchFallbackMemoriesForMemory:targetCount:memoryLocalIdentifiersToAvoid:sharingFilter:error:;
+ (BOOL)isMomentFetchResult:overlappingWithFetchResult:;
+ (BOOL)_isMomentFetchResult:overlappingWithFetchResults:;
+ (BOOL)_hasInvalidMemoryTriggerForMemory:;
+ (id)_memoryTriggerTypesToAvoid;
+ (id)fetchFallbackMemoryCandidatesInPhotoLibrary:memoryLocalIdentifiersToAvoid:sharingFilter:;
+ (BOOL)_isAcceptableUserFeedbackForMemory:keyAsset:userFeedbackCalculator:;
@end
