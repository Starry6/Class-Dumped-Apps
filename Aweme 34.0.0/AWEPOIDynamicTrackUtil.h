@interface AWEPOIDynamicTrackUtil : NSObject
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSMutableDictionary mutableDynamicParamsPool;
@property (nonatomic) NSPointerArray delegateArray;
@property (nonatomic) AWEPOIDynamicTrackConfigModel configModel;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) NSDictionary dynamicParamsPool;
- (id)delegateArray;
- (id)configModel;
- (void)setConfigModel:;
- (void)setDelegateArray:;
- (void)didReceiveDitoPageModel:shouldAutomaticallyUpdateSession:;
- (void)trackPOIDetailEventWithEventName:enterFrom:params:btmInfo:;
- (void)trackPOIEventWithEventName:params:btmInfo:;
- (id)calculateConflictKeysArrayInDictionary:withOtherDictionary:;
- (void)updateDynamicPoolWithNewParams:shouldAutomaticallyUpdateSession:;
- (void)willUpdateSessionInfo:preSessionInfo:;
- (void)didEndUpdateSessionInfo:;
- (id)dynamicParamsPool;
- (id)mergeDynamicParamsWithParams:determineBlock:;
- (void)setMutableDynamicParamsPool:;
- (void)didUpdateDynamicPool:;
- (void)logWithModuleName:description:;
- (id)tryFetchDynamicTrackParamsInPageModel:;
- (id)calculateNativeTrackParams:eventName:;
- (void)doTrackPOIEvent:finalParams:btmInfo:;
- (void)doTrackPOIDetailEvent:enterFrom:finalParams:btmInfo:;
- (id)mutableDynamicParamsPool;
- (void)trackPOIEventWithEventName:params:;
- (void)trackPOIDetailEventWithEventName:enterFrom:params:;
- (void)setSessionID:;
- (id)init;
- (void)addDelegate:;
- (id)initWithSessionID:;
- (id)sessionID;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)updateSessionInfo;
@end
