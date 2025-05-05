@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem
- (void)dealloc;
- (id)description;
- (void)doWorkForStore:inMonitor:completion:;
- (id)initWithDeletedRecordZoneID:options:request:;
@end
