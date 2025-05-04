@interface AWESiriSuggestionBlockRule : AWEExternalRouterBlockBaseRule
@property (nonatomic) NSString activityType;
@property (nonatomic) NSUserActivity userActivity;
- (BOOL)needBlockURLString:context:userActivity:linkSession:;
- (id)syncHandleURLString:context:scene:linkSession:;
- (BOOL)blockSiriSuggestion;
- (id)handleShoppingWithURLString:session:context:scene:;
- (id)handleScanWithURLString:session:context:scene:;
- (id)handleSettingsWithURLString:session:context:scene:;
- (id)handlePrivateWithURLString:session:context:scene:;
- (id)handleBroweWithURLString:session:context:scene:;
- (id)handleHandoffWithURLString:session:context:scene:;
- (id)userActivity;
- (void)setActivityType:;
- (id)activityType;
- (void).cxx_destruct;
- (void)setUserActivity:;
- (long long)ruleType;
+ (id)prepareBlockForWithURLString:context:linkSession:;
+ (void)trackAdUnionLaunchIfNeeded:isSchema:;
+ (void)traceEnterSiriEvent:;
@end
