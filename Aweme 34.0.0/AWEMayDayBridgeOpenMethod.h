@interface AWEMayDayBridgeOpenMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)_callWithParamModel:completionHandler:;
- (BOOL)shouldUseCampaignMemoryStrategy;
- (id)__findCurrentContainer;
- (void)handleOpenSchema:completionHandler:;
- (void)forceLandToFeed;
- (long long)authType;
- (id)methodName;
@end
