@interface VCXPCClientShared : AVConferenceXPCClient
@property (nonatomic) NSMutableDictionary registeredUUIDServiceBlocks;
@property (nonatomic) NSObject<OS_dispatch_queue> registeredBlocksQueue;
- (id)init;
- (void)dealloc;
- (void)deregisterFromNotifications;
- (void)registerBlockWithUUID:service:block:;
- (void)deregisterWithUUID:service:;
- (id)registeredUUIDServiceBlocks;
- (id)registeredBlocksQueue;
@end
