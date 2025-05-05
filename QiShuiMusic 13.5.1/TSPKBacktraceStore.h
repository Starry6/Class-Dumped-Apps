@interface TSPKBacktraceStore : NSObject
@property (nonatomic) NSMutableDictionary mutableBacktraceDic;
@property (nonatomic) <TSPKLock> lock;
- (id)findMatchedBacktraceWithPipelineType:beforeTimestamp:;
- (id)mutableBacktraceDic;
- (void)saveCustomCallBacktraceWithPipelineType:;
- (void)setMutableBacktraceDic:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)shared;
@end
