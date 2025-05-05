@interface MIController : NSObject
@property (nonatomic) BOOL isActive;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isActive;
- (void)sendData:;
- (void)activateController:;
- (void)deactivateController;
- (void)handleXPCEvent:;
- (void)recievedData:;
- (void)decodeDebugTreeData:;
+ (id)sharedController;
@end
