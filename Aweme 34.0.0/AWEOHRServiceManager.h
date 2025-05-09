@interface AWEOHRServiceManager : HTSService
@property (nonatomic) BOOL enabled;
@property (nonatomic) q hand;
@property (nonatomic) <OHRResult> ohrResult;
@property (nonatomic) <OHRWetHandResult> whrResult;
@property (nonatomic) <OHRHoldHandResult> hhrResult;
@property (nonatomic) double confidence;
@property (nonatomic) q mostUsedHand;
@property (nonatomic) q recentlyUsedHand;
@property (nonatomic) q lastSessionMostUsedHand;
@property (nonatomic) BOOL isCrossedHand;
@property (nonatomic) double interval;
@property (nonatomic) BOOL enableHistoryRecorder;
@property (nonatomic) double yVarianceThreshold;
@property (nonatomic) q windowLength;
@property (nonatomic) BOOL enableWhr;
@property (nonatomic) BOOL enableHhr;
@property (nonatomic) NSTimer scheduleStartTimer;
@property (nonatomic) q historyLeftHandUseCount;
@property (nonatomic) q historyRightHandUseCount;
@property (nonatomic) q currentSessionLeftHandUseCount;
@property (nonatomic) q currentSessionRightHandUseCount;
@property (nonatomic) q recentlyLeftHandCount;
@property (nonatomic) q recentlyRightHandCount;
@property (nonatomic) NSMutableArray lastHandList;
@property (nonatomic) <AWEStorageServiceKVInterface> storageHandler;
@property (nonatomic) BOOL shouldAddFeatureToPitaya;
@property (nonatomic) NSDictionary ohrABConfigDict;
@property (nonatomic) <HARSensorData> harSensorData;
@property (nonatomic) q harSensorDataUpdateTimeMs;
@property (nonatomic) AWEOHRTouchFeatureRecordHelper touchFeatureRecordHelper;
@property (nonatomic) <OHRTouchAreaResult> lastPredictTouchArea;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startWithInterval:;
- (void)onOHRPredictChangedDetail:;
- (BOOL)shouldInterceptPredictWithTouchEvents:;
- (void)onOHRWetHandPredictChangedDetail:;
- (void)onOHRHoldHandPredictChangedDetail:;
- (void)onOHREngineCollectTouch:;
- (id)lastPredictTouchArea;
- (long long)recentlyUsedHand;
- (long long)lastSessionMostUsedHand;
- (id)hhrResult;
- (void)clearOHRPredictRecord;
- (id)screenClickPositionList;
- (id)screenClickPositionListV2;
- (id)userActionTypeList;
- (id)ohrResult;
- (id)whrResult;
- (long long)mostUsedHand;
- (BOOL)isCrossedHand;
- (id)ohrABConfigDict;
- (void)setHarSensorData:;
- (void)setHarSensorDataUpdateTimeMs:;
- (id)harSensorData;
- (long long)harSensorDataUpdateTimeMs;
- (id)scheduleStartTimer;
- (void)setScheduleStartTimer:;
- (id)touchFeatureRecordHelper;
- (void)setOhrResult:;
- (BOOL)enableHistoryRecorder;
- (long long)calculateMostUsedHand:;
- (void)setMostUsedHand:;
- (long long)calculateRecentlyUsedHand:;
- (void)setRecentlyUsedHand:;
- (void)recordSessionUsedHand:;
- (BOOL)shouldAddFeatureToPitaya;
- (double)yVarianceThreshold;
- (void)setWhrResult:;
- (void)setHhrResult:;
- (long long)currentSessionLeftHandUseCount;
- (void)setCurrentSessionLeftHandUseCount:;
- (long long)currentSessionRightHandUseCount;
- (void)setCurrentSessionRightHandUseCount:;
- (long long)recentlyLeftHandCount;
- (void)setRecentlyLeftHandCount:;
- (long long)recentlyRightHandCount;
- (void)setRecentlyRightHandCount:;
- (id)lastHandList;
- (long long)calculateMostUsedHandWithLeftCount:rightCount:;
- (void)setIsCrossedHand:;
- (long long)historyLeftHandUseCount;
- (long long)historyRightHandUseCount;
- (void)setHistoryLeftHandUseCount:;
- (void)setHistoryRightHandUseCount:;
- (id)storageHandler;
- (void)setLastSessionMostUsedHand:;
- (void)setEnableHistoryRecorder:;
- (void)setYVarianceThreshold:;
- (BOOL)enableWhr;
- (void)setEnableWhr:;
- (BOOL)enableHhr;
- (void)setEnableHhr:;
- (void)setLastHandList:;
- (void)setStorageHandler:;
- (void)setShouldAddFeatureToPitaya:;
- (void)setTouchFeatureRecordHelper:;
- (double)interval;
- (id)init;
- (void)dealloc;
- (void)setConfidence:;
- (double)confidence;
- (void)setInterval:;
- (void)setEnabled:;
- (BOOL)enabled;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:;
- (void)loadData;
- (void)setWindowLength:;
- (long long)windowLength;
- (void)saveData;
- (long long)hand;
- (void)setHand:;
@end
