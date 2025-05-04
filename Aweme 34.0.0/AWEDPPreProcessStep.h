@interface AWEDPPreProcessStep : AWEWorkflowStep
@property (nonatomic) NSMutableDictionary store;
- (void)onStep:linkSession:;
- (id)aAWEDPPreProcessStepCommonAdapter;
- (void)forbidSharePasteboardIfNeededWithQuery:;
- (void)popTopControllerIfNeeded;
- (BOOL)shouldRedirectNearbyUndertakeSchema:;
- (BOOL)isLifeOfflineSituation:;
- (BOOL)isToIMChatCenter:;
- (void)preloadIMIfNecessary:;
- (id)store;
- (void)setStore:;
- (void).cxx_destruct;
+ (Class)aAWEDPPreProcessStepCommonAdapterClass;
@end
