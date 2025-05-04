@interface AWERecordFirstFrameTrackerNew : ACCToolPerformanceTrakcer
@property (nonatomic) q recordCount;
@property (nonatomic) ACCRecordViewControllerInputData inputData;
@property (nonatomic) BOOL forceLoadComponent;
@property (nonatomic) <IESServiceProvider> serviceProvider;
- (void)eventBegin:;
- (BOOL)isColdLaunchCamera;
- (void)finishTrackWithInputData:errorCode:;
- (void)finishTrackWithInputData:;
- (void)setForceLoadComponent:;
- (id)getBizParmas:;
- (void)checkNewSessionBegin;
- (BOOL)forceLoadComponent;
- (id)init;
- (void)setRecordCount:;
- (void).cxx_destruct;
- (long long)recordCount;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (id)inputData;
- (void)setInputData:;
+ (id)sharedTracker;
@end
