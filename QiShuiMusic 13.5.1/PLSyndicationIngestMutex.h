@interface PLSyndicationIngestMutex : NSObject
- (id)tryUsingSyndicationIngestLibraryWithIdentifier:;
- (id)initWithDatabaseContext:;
- (id)_obtainSyndicationIngestLibraryIfPossibleWithIdentifier:;
- (void).cxx_destruct;
- (id)syndicationIngestMutexStateDescription;
- (void)stopUsingSyndicationIngestLibraryWithIdentifier:;
- (BOOL)shouldStopUsingSyndicationIngestLibraryWithIdentifier:;
@end
