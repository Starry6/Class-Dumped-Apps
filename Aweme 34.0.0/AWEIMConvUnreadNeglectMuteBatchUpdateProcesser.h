@interface AWEIMConvUnreadNeglectMuteBatchUpdateProcesser : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) @? batchUpdateRuleBlock;
@property (nonatomic) @? realTimeUpdateRuleBlock;
@property (nonatomic) BOOL shouldRealTimeInjectRule;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
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
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
+ (void)clearVersionWithUid:;
@end
