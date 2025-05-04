@interface AWEIMABTestSDKManager : NSObject
- (void)registerABExperiments;
- (long long)enterprisePlusButtonStrategy;
- (long long)isInnerPushAllowOneConvAggregateExperimentEnable;
- (BOOL)isFoldPunishMessageExperimentEnabled;
- (BOOL)isImageVideoFoldPunishMessageExperimentEnable;
- (long long)enterpriseConversationCustomPlaceholderStrategy;
- (id)bulletCardKeyboardExperiment;
- (id)enterpriseConversationCustomPlaceholderExperiment;
- (id)enterpriseTabDefaultLandingExperiment;
- (id)enterprisePlusButtonExperiment;
- (id)foldPunishMessageExperiment;
- (id)imageAndVideoFoldPunishMessageExperiment;
- (id)innerPushAllowOneConvAggregateExperiment;
- (id)formatEnablePlusPanelExperiment;
- (long long)formatEnablePlusPanelStrategy;
- (long long)enterpriseTabDefaltLandingStrategy;
- (id)enterpriseHighlyProspectiveTabRecommendChatsExperiment;
- (BOOL)isEnterpriseHighlyProspectiveTabRecommendChatsExperimentEnabled;
+ (id)sharedInstance;
@end
