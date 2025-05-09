@interface INIntentDeliverer : NSObject
@property (nonatomic) INExtensionContextIntentResponseObserver getRideStatusObserver;
@property (nonatomic) INExtensionContextIntentResponseObserver getCarPowerLevelObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) {?=[8I]} auditToken;
@property (nonatomic) <INIntentDeliveringDelegate> delegate;
- (id)_processResolutionDataProviderForIntent:intentSlotDescription:updateIntent:completion:;
- (void)getSupportsParameterOptionsForParameterNamed:intent:completionHandler:;
- (id)getCarPowerLevelObserver;
- (void)setDelegate:;
- (void)stopSendingUpdatesForIntent:completionHandler:;
- (void)getParameterOptionsForParameterNamed:intent:searchTerm:completionBlock:;
- (void)setGetRideStatusObserver:;
- (void)startSendingUpdatesForIntent:toObserver:completionHandler:;
- (void)getIntentParameterDefaultValue:forIntent:completionBlock:;
- (id)initWithQueue:auditToken:;
- (id)auditToken;
- (void)_deliverIntent:withBlock:;
- (id)_processOptionsForIntent:parameterNamed:completionHandler:;
- (void)setGetCarPowerLevelObserver:;
- (void)_invokeIntentHandlerMethodForIntent:intentHandler:parameterNamed:keyForSelectors:executionHandler:unimplementedHandler:;
- (void)confirmIntent:withCompletion:;
- (void)getIntentParameterOptions:forIntent:searchTerm:completionBlock:;
- (id)delegate;
- (void)resolveIntentParameter:forIntent:completionBlock:;
- (void)resolveIntentParameters:forIntent:completionBlock:;
- (id)getRideStatusObserver;
- (void)_processDefaultValue:forIntent:parameterNamed:completionHandler:;
- (void).cxx_destruct;
- (void)handleIntent:withCompletion:;
- (void)_resolveIntentParameter:forIntent:intentHandler:updateIntent:withCompletion:;
- (void)_stopSendingUpdatesForIntent:fromConnection:completionHandler:;
- (id)_processIntentResponseCompletionHandlerWithIntent:completion:;
- (void)_startSendingUpdatesForIntent:toObserver:fromConnection:completionHandler:;
- (id)queue;
- (void)_processIntent:intentResponse:completion:;
- (BOOL)_updateIntent:intentSlotDescription:resolutionResultDataProvider:;
@end
