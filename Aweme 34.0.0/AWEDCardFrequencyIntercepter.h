@interface AWEDCardFrequencyIntercepter : NSObject
@property (nonatomic) NSArray poiIDs;
@property (nonatomic) NSString reason;
@property (nonatomic) NSMutableDictionary freqRulesInMem;
- (BOOL)p_processInfoForPID:procInfo:;
- (BOOL)acceptDCard:;
- (int)dcardsAcceptionBitsForContainerType:;
- (void)testFreqControlWithAwemeModel:testResult:;
- (void)setPoiIDs:;
- (void)deleteLocalFreqStrategiesIfNeeded;
- (void)setFreqRules:ofContainer:;
- (id)freqRulesInMem;
- (id)persistenceKey:;
- (int)dcardsAcceptionBitsForContainerType:rejectReason:;
- (id)allCardsAcceptResultWithContainerType:;
- (double)reportBitsRateForType:;
- (id)freqRulesOfContainerType:;
- (id)allAcceptBitsRules:;
- (id)acceptBitsRulesOfContainerType:scene:;
- (BOOL)acceptDCardWithScene:usingFreqControlRules:usingAcceptBitsRules:rejectReason:;
- (id)selectValidStats:usingFreqStrategy:;
- (BOOL)hitFreqStrategy:withTargetStats:;
- (BOOL)acceptDCard:rejectReason:;
- (id)selectLastNHours:usingFreqStrategy:;
- (id)selectLastNExposed:usingFreqStrategy:;
- (id)selectToday:usingFreqStrategy:;
- (id)selectFromAppLaunch:usingFreqStrategy:;
- (id)selectLastNMinutes:usingFreqStrategy:;
- (id)poiIDs;
- (void)updateFreqRules:;
- (void)setFreqRulesInMem:;
- (id)init;
- (double)processStartTime;
- (void)setReason:;
- (void).cxx_destruct;
- (id)reason;
+ (id)shared;
@end
