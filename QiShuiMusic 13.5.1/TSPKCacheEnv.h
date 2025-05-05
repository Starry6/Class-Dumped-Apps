@interface TSPKCacheEnv : NSObject
@property (nonatomic) NSMutableDictionary processorDict;
@property (nonatomic) <TSPKLock> lock;
- (BOOL)containsProcessor:;
- (BOOL)needUpdate:;
- (id)processorDict;
- (void)registerProcessor:key:;
- (void)setProcessorDict:;
- (void)updateCache:newValue:;
- (id)init;
- (id)lock;
- (id)get:;
- (void).cxx_destruct;
- (void)setLock:;
- (void)unregisterProcessor:;
+ (id)shareEnv;
@end
