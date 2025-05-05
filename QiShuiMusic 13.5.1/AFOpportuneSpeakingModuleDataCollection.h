@interface AFOpportuneSpeakingModuleDataCollection : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)logSpeakable:forContact:withModelId:withFeatures:withScore:;
- (void)logFeedbackOfType:forSpeakableId:withModelId:;
- (void)logRecommendedAction:forSpeakableId:withModelId:;
- (void)logInteractionEvents:forSpeakableId:;
- (void)_deleteSpeakablesOlderThan:;
+ (id)sharedCollector;
@end
