@interface IESLiveEffectDownloadTrackHandler : NSObject
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) HTSEventContext trackContext;
- (void)edl_monitorDownloadTaskCompleteWithEvent:filePath:duration:error:extra:;
- (void)edl_monitorWithEvent:error:extra:;
- (id)p_getFileSize:;
- (void)setTrackContext:;
- (id)trackContext;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
