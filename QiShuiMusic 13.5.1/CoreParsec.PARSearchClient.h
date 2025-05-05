@interface CoreParsec.PARSearchClient : NSObject
@property (nonatomic) NSXPCConnection connection;
- (void)bagDidLoad:error:;
- (void)didDownloadResource:;
- (void)didDeleteResource:;
- (void)didReceiveFeedbackData:agent:;
- (id)init;
- (void)dealloc;
- (void)fileHandleAndAttributesForResource:completion:;
- (void)updateParametersForSmartSearchV1:smartSearchV2:;
- (id)connection;
- (void).cxx_destruct;
- (void)bag:reply:;
- (void)forceFetchBag:reply:;
- (unsigned long long)request:request:reply:;
- (void)listSessions:;
- (void)getImageMap:;
- (void)clearEngagementsFrom:to:;
- (void)reportFeedback:feedback:queryId:;
- (void)clearEngagementsWith:type:;
- (void)clearEngagedResults:with:completion:;
@end
