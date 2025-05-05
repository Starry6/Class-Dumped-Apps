@interface LynxMemoryListener : NSObject
@property (nonatomic) NSMutableArray memoryReporters;
- (id)memoryReporters;
- (void)addMemoryReporter:;
- (void)removeMemoryReporter:;
- (void)setMemoryReporters:;
- (void)uploadImageInfo:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
