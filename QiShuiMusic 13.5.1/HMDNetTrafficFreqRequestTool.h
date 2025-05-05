@interface HMDNetTrafficFreqRequestTool : NSObject
@property (nonatomic) NSMutableDictionary highFreqQueue;
@property (nonatomic) NSMutableDictionary historyQueue;
@property (nonatomic) q frequencyThreashold;
@property (nonatomic) q anchorTS;
- (long long)anchorTS;
- (void)cacheSourceUsageInfo:;
- (id)cachedSourceInfoWithKey:;
- (id)dumpHighFrequencyUsageWithThreshold:;
- (long long)frequencyThreashold;
- (id)highFreqQueue;
- (id)historyQueue;
- (void)setAnchorTS:;
- (void)setFrequencyThreashold:;
- (void)setHighFreqQueue:;
- (void)setHistoryQueue:;
- (void)usageDictRemoveEarliestValueWithDict:initTimeStamp:deletEarliest:;
- (id)init;
- (void)cleanCache;
- (void).cxx_destruct;
@end
