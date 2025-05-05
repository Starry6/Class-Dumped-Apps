@interface JSWorkerBridgePool : NSObject
@property (nonatomic) NSMutableDictionary bridgesMap;
- (id)bridgesMap;
- (void)setBridgesMap:;
- (void).cxx_destruct;
+ (void)unregisterBridgeForContainerID:;
+ (id)bridgeForContainerID:;
+ (void)registerBridge:forContainerID:;
+ (id)sharedPool;
@end
