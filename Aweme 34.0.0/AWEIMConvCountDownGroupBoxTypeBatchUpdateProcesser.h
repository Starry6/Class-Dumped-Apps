@interface AWEIMConvCountDownGroupBoxTypeBatchUpdateProcesser : AWEIMConvBoxTypeBatchUpdateProcesser
- (BOOL)needBatchUpdateDB;
- (id)realTimeUpdateRuleBlock;
- (void)setRealTimeUpdateRuleBlock:;
- (BOOL)ifRelyConvSettingInfoChange;
- (BOOL)ifRelyConvInfoChange;
- (BOOL)ifRelyConvUnreadCountChange;
- (void).cxx_destruct;
@end
