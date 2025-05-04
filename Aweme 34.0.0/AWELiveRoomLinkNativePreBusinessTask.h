@interface AWELiveRoomLinkNativePreBusinessTask : IESLiveLinkTask
@property (nonatomic) AWELiveRoomLinkNativeEnterPreParam enterParam;
- (void)p_checkHTTPDNSEnableOrNot;
- (BOOL)p_isNeedChildModeMonitorWithEnterFrom:enterMethod:;
- (void)childModeMonitor;
- (void)setEnterParam:;
- (id)enterParam;
- (void)updateContextParam:;
- (void)run;
- (void).cxx_destruct;
@end
