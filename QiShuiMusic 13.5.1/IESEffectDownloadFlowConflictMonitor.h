@interface IESEffectDownloadFlowConflictMonitor : NSObject
@property (nonatomic) NSHashTable monitorTable;
- (id)monitorTable;
- (void)notifyDownloadFlowTrackWithTask:;
- (void)setMonitorTable:;
- (void)trackCurrentDownloadingFlowWithBusinessParameters:;
- (id)init;
- (void).cxx_destruct;
@end
