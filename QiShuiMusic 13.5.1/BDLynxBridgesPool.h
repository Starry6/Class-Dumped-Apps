@interface BDLynxBridgesPool : NSObject
@property (nonatomic) LynxThreadSafeDictionary bridgesMap;
- (id)bridgesMap;
- (void)setBridgesMap:;
- (void).cxx_destruct;
+ (double)cleaningLatency;
+ (void)triggerCleaning;
+ (void)_doCleaning;
+ (id)bridgeForContainerID:;
+ (id)bridgesEnumerator;
+ (void)setBridge:forContainerID:;
+ (void)setCleaningLatency:;
+ (void)setShouldTriggerCleaning:;
+ (BOOL)shouldTriggerCleaning;
+ (void)enumerateKeysAndObjectsUsingBlock:;
+ (id)sharedPool;
@end
