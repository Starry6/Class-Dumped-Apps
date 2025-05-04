@interface AWEIMConvFeedSkylightBoxTypeBatchUpdateProcesser : AWEIMConvBoxTypeBatchUpdateProcesser
@property (nonatomic) BOOL shouldFilterFansGrop;
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
- (BOOL)ifRelyConvParticipantsChange;
- (BOOL)ifRelyConvUnreadCountChange;
- (BOOL)__enableShowInFeedSkylightWithCon:;
- (BOOL)shouldFilterFansGrop;
- (void)setShouldFilterFansGrop:;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
+ (void)clearVersionWithUid:;
+ (BOOL)hasFinishBatchUpdateForUid:;
@end
