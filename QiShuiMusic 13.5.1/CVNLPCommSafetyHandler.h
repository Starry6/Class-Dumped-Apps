@interface CVNLPCommSafetyHandler : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> clientQueue;
@property (nonatomic) CVNLPCommSafetyImageAnalyzer imageAnalyzer;
@property (nonatomic) CVNLPCommSafetyTextAnalyzer textAnalyzer;
@property (nonatomic) NSDictionary options;
@property (nonatomic) CVNLPPerformance perfResults;
- (id)clientQueue;
- (id)imageAnalyzer;
- (id)options;
- (void).cxx_destruct;
- (id)performanceStatistics;
- (id)initWithOptions:error:;
- (id)perfResults;
- (long long)classifyImage:error:;
- (id)generateClassificationScoresForImage:error:;
- (long long)classifyPixelBuffer:error:;
- (id)generateClassificationScoresForPixelBuffer:error:;
- (id)getOperatingPointDataForClassName:error:;
- (id)processText:inConversationWithIdentifier:date:error:;
- (void)processConversationsWithStartDate:endDate:previousClassifications:progressHandler:completionHandler:;
- (id)classifyPixelBuffer:stagedText:inConversationWithIdentifier:error:;
- (id)classifyPixelBuffer:startDate:endDate:stagedText:inConversationWithIdentifier:error:;
- (id)textAnalyzer;
@end
