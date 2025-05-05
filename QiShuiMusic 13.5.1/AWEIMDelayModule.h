@interface AWEIMDelayModule : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) IESIMSaaSThreadSafeDictionary modules;
- (void)p_finishProcessWithEvent:inModule:subModules:extra:;
- (void)p_processDiscontinueInModule:subModules:;
- (void)p_processNode:inModule:subModules:extra:;
- (id)init;
- (id)modules;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setModules:;
- (void)setSerialQueue:;
+ (BOOL)enableApplogSampling;
+ (void)finishProcessWithEvent:inModule:extra:;
+ (void)finishProcessWithEvent:inModule:subModules:extra:;
+ (BOOL)p_processInfoForPID:procInfo:;
+ (double)p_processStartTime;
+ (void)processDiscontinueInModule:;
+ (void)processDiscontinueInModule:subModules:;
+ (void)processNode:inModule:;
+ (void)processNode:inModule:subModules:;
+ (void)processNode:inModule:subModules:extra:;
+ (id)sharedInstance;
@end
