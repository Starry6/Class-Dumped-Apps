@interface AWEIMConvStrangerBoxTypeBatchUpdateProcesser : AWEIMConvBoxTypeBatchUpdateProcesser
@property (nonatomic) BOOL determineIsStrangerThroughCoreExt;
@property (nonatomic) BOOL resetConversationBelongedAcquaintanceType;
- (BOOL)needBatchUpdateDB;
- (BOOL)hasBatchUpdateDone;
- (void)finishBatchUpdateAndSetNowVersion;
- (BOOL)shouldBatchUpdateStranger;
- (id)initWithUid:shouldRealTimeInjectRule:;
- (id)batchUpdateRuleBlock;
- (void)setBatchUpdateRuleBlock:;
- (id)realTimeUpdateRuleBlock;
- (void)setRealTimeUpdateRuleBlock:;
- (BOOL)shouldRealTimeInjectRule;
- (void)setShouldRealTimeInjectRule:;
- (BOOL)ifRelyConvSettingInfoChange;
- (BOOL)ifRelyConvCoreInfoChange;
- (BOOL)determineIsStrangerThroughCoreExt;
- (BOOL)isStrangerWithUids:currentAccountID:;
- (BOOL)isFriendStranger:oldIsStranger:;
- (BOOL)resetConversationBelongedAcquaintanceType;
- (void)setDetermineIsStrangerThroughCoreExt:;
- (void)setResetConversationBelongedAcquaintanceType:;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
+ (void)clearVersionWithUid:;
@end
