@interface DTFLogMonitor : NSObject
- (void)addDebugMonitorLogWithSeedId:extParam:;
- (void)addMonitorLogWithSeedId:extParam:;
- (void)addMonitorLogWithSeedId:param:extParam:;
- (void)addMonitorLogWithSeedId:ucId:extParam:;
- (void)addMonitorLogWithSeedId:ucId:param:extParam:;
- (void)addPublicLog:;
- (void)setupBaseExtInfo;
- (id)init;
- (void).cxx_destruct;
- (void)upload;
+ (void)DTF_writeLogWithActionId:extParams:appId:seed:ucId:;
+ (void)setUploadBlock:;
+ (void)distantUploadlog;
+ (id)getExtLogDic:;
+ (id)getPublicLogDic:;
+ (BOOL)uploadLogChooice;
+ (void)writeLogWithActionId:extParams:appId:seed:ucId:;
+ (void)writeLogWithActionId:extParams:appId:seed:ucId:bizType:formatterDictionary:;
+ (void)setSDKVersion:;
+ (id)getInstance;
@end
