@interface PLDuplicateDetector : NSObject
+ (id)duplicateDetectorExcludedAssetsPredicateWithPrefix:;
+ (id)duplicateDetectorExcludeZeroByteFingerprintPredicateWithProperty:;
+ (BOOL)duplicateDetectorCompletedDateBackgroundMigrationAction:;
+ (BOOL)duplicateDetectorCompletedPerceptualHashProcessingWithManagedObjectContext:;
+ (short)currentSceneAnalysisUmbrellaVersion;
+ (void)postProcessDuplicateSubGroupWithResult:metadataMap:metadataKey:subGroupSplitDecisionBlock:;
+ (id)_postProcessSortOIDs:oidMetadataMap:sortKey:;
@end
