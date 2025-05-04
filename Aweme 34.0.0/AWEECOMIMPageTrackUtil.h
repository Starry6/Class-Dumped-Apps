@interface AWEECOMIMPageTrackUtil : NSObject
@property (nonatomic) AWEECOMIMPageTrackConfig config;
@property (nonatomic) NSMutableSet didTrackViewEventLocationKeys;
@property (nonatomic) NSMutableDictionary paramsModelMap;
- (void)trackEvent:params:;
- (void)trackModuleViewEventWithParamsModel:;
- (void)trackModuleClickEventWithParamsModel:;
- (id)generateClickUUID;
- (void)beginClickResultEventWithClickUUID:paramsModel:;
- (id)pageCommonParams;
- (void)endClickResultEventWithClickUUID:clickResult:;
- (void)setDidTrackViewEventLocationKeys:;
- (void)setParamsModelMap:;
- (id)paramsModelMap;
- (void)p_forceEndClickResultListEventWithClickUUID:clickResult:;
- (id)locationKeyWithDataId:locationType:locationSubType:;
- (id)didTrackViewEventLocationKeys;
- (void)p_trackEvent:paramsModel:;
- (void)p_finalTrackEvent:params:;
- (void)endClickResultListEventWithClickUUID:clickResult:;
- (void)beginClickResultListEventWithClickUUID:paramsModel:;
- (void)updateClickResultListEventWithClickUUID:pendingActionTypeList:;
- (void)setConfig:;
- (void)dealloc;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
+ (double)defaultTimeout;
@end
