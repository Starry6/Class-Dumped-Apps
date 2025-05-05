@interface PFCloudKitImporterWorkItem : NSObject
- (void)dealloc;
- (id)initWithOptions:request:;
- (void)doWorkForStore:inMonitor:completion:;
@end
