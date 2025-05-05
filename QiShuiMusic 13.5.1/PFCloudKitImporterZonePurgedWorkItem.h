@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem
- (void)dealloc;
- (id)description;
- (void)doWorkForStore:inMonitor:completion:;
- (id)initWithPurgedRecordZoneID:options:request:;
@end
