@interface AWEIMConvFoldBoxTypeBatchUpdateProcesser : AWEIMConvBoxTypeBatchUpdateProcesser
- (BOOL)needBatchUpdateDB;
- (BOOL)hasBatchUpdateDone;
- (void)finishBatchUpdateAndSetNowVersion;
- (id)initWithUid:shouldRealTimeInjectRule:;
- (id)batchUpdateRuleBlock;
- (void)setBatchUpdateRuleBlock:;
- (id)realTimeUpdateRuleBlock;
- (void)setRealTimeUpdateRuleBlock:;
- (BOOL)shouldRealTimeInjectRule;
- (void)setShouldRealTimeInjectRule:;
- (BOOL)ifRelyConvSettingInfoChange;
- (BOOL)p_foldBoxABTestMatchedWithConv:;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
+ (void)clearVersionWithUid:;
@end
