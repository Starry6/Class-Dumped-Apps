@interface PFCloudKitExportContext : NSObject
- (void)dealloc;
- (id)initWithOptions:;
- (BOOL)processAnalyzedHistoryInStore:inManagedObjectContext:error:;
- (BOOL)checkForObjectsNeedingExportInStore:andReturnCount:withManagedObjectContext:error:;
@end
