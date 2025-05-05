@interface PLAggdLogging : NSObject
+ (void)performMomentsStatisticsLogging:;
+ (void)performSlideshowProjectStatisticsLogging:;
+ (void)_addDistributionStatisticsOfValues:withPrefix:toDictionary:formatter:;
+ (id)_analyticsDescriptionForMediaAge:;
+ (id)_analyticsDescriptionForAssetCount:;
+ (void)_addPrefix:toKeysInDictionary:inPrefixedDictionary:;
+ (void)_addLibrarySummaryDataToCollectionIfPresent:fromCPLEventData:forKey:;
+ (void)configureEnumeratorForLibrarySizeLogging:cloudPhotoLibraryEnabled:dataForCA:dataForCK:;
+ (void)configureEnumeratorForHyperionLocalResourcesLogging:cloudPhotoLibraryEnabled:dataForCA:dataForCK:;
+ (void)configureEnumeratorForLibrarySummaryForLibraryEnumerator:withSyndicationLibraryEnumerator:cloudPhotoLibraryEnabled:dataForCA:;
+ (void)_configureEnumeratorForSyndicationLibrarySummaryLogging:dataForCA:;
+ (void)_configureEnumeratorForLibrarySummaryLogging:cloudPhotoLibraryEnabled:dataForCA:;
+ (void)performCMMSummaryLogging:cloudPhotoLibraryEnabled:;
+ (void)performLibraryStatisticsLoggingForLibrary:completionHandler:;
+ (void)_addPersistentHistoryStatsToLibrarySummaryEvent:withLibraryPathManager:;
+ (void)_addFileSystemStatsToLibrarySummaryEvent:withLibraryPathManager:;
+ (id)_fetchPersistentHistoryStatsWithLibraryPathManager:;
@end
