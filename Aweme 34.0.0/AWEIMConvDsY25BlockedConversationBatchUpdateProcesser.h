@interface AWEIMConvDsY25BlockedConversationBatchUpdateProcesser : AWEIMConvBoxTypeBatchUpdateProcesser
- (BOOL)needBatchUpdateDB;
- (BOOL)hasBatchUpdateDone;
- (void)finishBatchUpdateAndSetNowVersion;
- (id)initWithUid:shouldRealTimeInjectRule:;
- (id)p_generateRuleBlock;
- (BOOL)ifRelyConvCoreInfoChange;
@end
