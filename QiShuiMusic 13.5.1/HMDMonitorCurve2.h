@interface HMDMonitorCurve2 : HMDMonitorCurve
@property (nonatomic) HMInstance instance;
- (void)applicationEnterBackground:;
- (void)dropAllDataForServerState;
- (id)initWithCurveName:recordClass:;
- (void)pushRecord:;
- (void)pushRecordToDBImmediately:;
- (void)recordDataDirectly:;
- (id)instance;
- (void)setInstance:;
- (void).cxx_destruct;
@end
