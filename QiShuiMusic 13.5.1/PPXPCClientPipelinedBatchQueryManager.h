@interface PPXPCClientPipelinedBatchQueryManager : NSObject
- (id)init;
- (BOOL)syncExecuteQueryWithName:error:queryInitializer:handleBatch:;
- (id)initWithName:;
- (void)handleReplyWithName:batch:isLast:error:queryId:completion:;
- (void).cxx_destruct;
- (void)cancelPendingQueriesWithError:;
+ (void)assertBatch:forQueryName:hasExpectedContainedType:;
@end
