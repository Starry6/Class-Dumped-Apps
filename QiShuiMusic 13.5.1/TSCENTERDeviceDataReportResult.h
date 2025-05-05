@interface TSCENTERDeviceDataReportResult : TSCENTERBaseResult
@property (nonatomic) NSString apdid;
@property (nonatomic) NSString token;
@property (nonatomic) NSString currentTime;
@property (nonatomic) NSString version;
@property (nonatomic) NSString vkeySwitch;
@property (nonatomic) NSString bugTrackSwitch;
@property (nonatomic) NSString appListVer;
- (id)apdid;
- (id)appListVer;
- (id)bugTrackSwitch;
- (void)setApdid:;
- (void)setAppListVer:;
- (void)setBugTrackSwitch:;
- (void)setVkeySwitch:;
- (id)vkeySwitch;
- (void)setCurrentTime:;
- (id)token;
- (void)setVersion:;
- (id)version;
- (void)setToken:;
- (void).cxx_destruct;
- (id)currentTime;
@end
