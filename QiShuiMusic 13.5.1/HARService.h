@interface HARService : NSObject
@property (nonatomic) double frequencyInterval;
@property (nonatomic) @? predictCB;
@property (nonatomic) <IInferenceEngine> delegate;
@property (nonatomic) <HARMotionDataProvider> motionDataProvider;
@property (nonatomic) BOOL isEnableControlOnMac;
@property (nonatomic) BOOL isEnableFrequencyControl;
@property (nonatomic) BOOL prohibit;
@property (nonatomic) NSInteger maxRange;
@property (nonatomic) NSMutableArray arrayWithResults;
@property (nonatomic) NSMutableArray arrayWithResultsDic;
@property (nonatomic) NSDictionary lastResult;
@property (nonatomic) NSObject<OS_dispatch_queue> helperQueue;
@property (nonatomic) HARSensorDataController dataController;
@property (nonatomic) HARSensorDataSampler dataSampler;
@property (nonatomic) <HARPredictStrategy> predictStrategy;
@property (nonatomic) {HARStatisticsSensorData=ddddddB} statisticsSensorData;
@property (nonatomic) BOOL enableCollectDeviceAttitude;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictStrategy;
- (void)setEnableCollectDeviceAttitude:;
- (void)setDataSampler:;
- (BOOL)startPredicting;
- (id)_getLastResultsFromArray:ofRange:;
- (BOOL)_startPredicting;
- (void)addResultToArray:;
- (void)addResultToDicArray:;
- (id)arrayWithResults;
- (id)arrayWithResultsDic;
- (id)currentTimeStr;
- (id)dataSampler;
- (BOOL)enableCollectDeviceAttitude;
- (id)formatCorrectionWith:;
- (double)frequencyInterval;
- (id)getLastDeviceAttitudesWithXMeanThreshold:yMeanThreshold:zMeanThreshold:;
- (unsigned long long)getLastHandholdStatusWithSlideStatus:xMeanThreshold:yMeanThreshold:zMeanThreshold:varThreshold0:varThreshold1:;
- (long long)getLastIntStatus;
- (long long)getLastRangeMostIntStatus:;
- (id)getLastResultsDicOfRange:;
- (id)getLastResultsOfRange:;
- (id)getLastStatus;
- (long long)getMostIntStatusInArray:;
- (unsigned long long)getSupportStatusWithVarThreshold0:varThreshold1:;
- (BOOL)isEnableControlOnMac;
- (BOOL)isEnableFrequencyControl;
- (BOOL)isOnMacDevice;
- (BOOL)isPredicting;
- (id)motionDataProvider;
- (unsigned long long)normalGetHandHoldStatusWithHarIntStatus:deviceAttitudes:supportStatus:;
- (void)onSensorDataReady:statisticsSensorData:;
- (id)predictCB;
- (BOOL)prohibit;
- (void)setArrayWithResults:;
- (void)setArrayWithResultsDic:;
- (void)setDataController:;
- (void)setEnableControlOnMacFlagWithBool:;
- (void)setFrequencyInterval:;
- (void)setIsEnableControlOnMac:;
- (void)setIsEnableFrequencyControl:;
- (void)setMotionDataProvider:;
- (void)setPredictCB:;
- (void)setPredictCallback:;
- (void)setPredictStrategy:;
- (void)setProhibit:;
- (void)setProhibitEnable:;
- (void)setStatisticsSensorData:;
- (void)setupDataControllerIfNeeded;
- (void)setupWithEngine:;
- (void)setupWithEngine:motionDataProvider:;
- (BOOL)shouldStartPredicting;
- (BOOL)startOncePredictingWithInterval:;
- (id)statisticsSensorData;
- (void)stopPredicting;
- (id)init;
- (void)setDelegate:;
- (id)helperQueue;
- (id)delegate;
- (void).cxx_destruct;
- (int)maxRange;
- (void)setMaxRange:;
- (void)setHelperQueue:;
- (id)dataController;
- (id)getLastResult;
- (void)setLastResult:;
+ (id)sharedInstance;
@end
