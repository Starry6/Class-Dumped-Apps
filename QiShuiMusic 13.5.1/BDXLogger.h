@interface BDXLogger : NSObject
@property (nonatomic) NSMutableDictionary containerIdMap;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (id)containerIdMap;
- (void)logWithTag:level:file:func:line:message:builder:;
- (void)logWithTag:level:message:;
- (void)setContainerIdMap:;
- (id)init;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setSerialQueue:;
+ (void)attachContainerID:bulletSessionID:;
+ (BOOL)checkLogWithTag:;
+ (void)logWithTag:level:file:func:line:message:;
+ (void)logWithTag:level:file:func:line:message:builder:;
+ (void)logWithTag:level:file:func:line:message:builderBlock:;
+ (void)logWithTag:level:file:func:line:message:paramsDict:;
+ (id)sharedInstance;
@end
