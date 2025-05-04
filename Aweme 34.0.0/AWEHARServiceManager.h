@interface AWEHARServiceManager : HTSService
@property (nonatomic) HARService harService;
@property (nonatomic) q predictInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getLastResultsDicOfRange:;
- (long long)getLastRangeMostIntStatus:;
- (id)getLastSensorValueWithDataType:range:;
- (void)startPredicting;
- (void)stopPredicting;
- (BOOL)isPredicting;
- (id)getLastStatus;
- (id)getLastResultsOfRange:;
- (long long)getLastIntStatusForType:;
- (long long)getLastIntStatus;
- (void)setupEngineWithEngineConfig:;
- (void)setPredictInterval:;
- (long long)predictInterval;
- (id)harService;
- (void)setHarService:;
- (id)init;
- (void).cxx_destruct;
- (id)getLastResult;
@end
