@interface VIAnalytics : NSObject
@property (nonatomic) VIAFeedbackSubmitter feedbackSubmitter;
@property (nonatomic) <VIAnalyticsTestingDelegate> testingDelegate;
- (id)serialQueue;
- (void)setTestingDelegate:;
- (void).cxx_destruct;
- (id)testingDelegate;
- (void)_logEvent:;
- (id)initWithFeedbackSubmitter:;
- (void)_performLogEvent:;
- (id)feedbackSubmitter;
+ (void)logEvent:;
+ (id)_shared;
@end
