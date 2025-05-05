@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker
- (unsigned long long)batchSize;
- (id)resourceIDsForPrefetchWithLibrary:;
- (BOOL)isNetworkAccessAllowed;
+ (id)syndicationWorkerCriteria;
@end
