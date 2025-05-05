@interface AFOpportuneSpeakingModelFeedbackManager : NSObject
- (id)init;
- (void)save;
- (void).cxx_destruct;
- (void)loadIfNecessary;
- (id)lastNegativeFeedbackForContact:;
- (void)setLastNegativeFeedbackForContact:;
- (void)fetchNotificationUsageForSpeakableId:withStartDate:withEndDate:withHandler:;
- (BOOL)interactionDetectedForSpeakableId:;
@end
