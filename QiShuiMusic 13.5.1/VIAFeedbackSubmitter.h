@interface VIAFeedbackSubmitter : NSObject
@property (nonatomic) PARSession parSession;
@property (nonatomic) <VIAnalyticsTestingDelegate> testingDelegate;
- (void)reportFeedback:queryId:;
- (void)setTestingDelegate:;
- (void).cxx_destruct;
- (id)testingDelegate;
- (id)initWithPARSession:;
- (void)didHitCacheForQueryId:;
- (id)parSession;
@end
