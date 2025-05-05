@interface PPUniversalSearchFeedbackListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportFeedback:queryId:;
- (id)init;
- (id)fetchFeedbackCSSIParsedResults:feedbackBundleId:queryId:;
- (id)protectionClassForBundleId:;
- (void).cxx_destruct;
- (void)sendMetricsFeedback:engagedCSSICount:;
- (void)sendFeedbackWithEngagementStrings:rejectionStrings:store:;
@end
