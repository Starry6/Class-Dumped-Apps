@interface WCMClientProxy : NSObject
- (id)init;
- (void)dealloc;
- (void)reConnect;
- (BOOL)connectToServer;
- (id)initWithClientProcessId:delegate:dispatch:;
- (void)registerToServer;
- (void)sendMessage:argument:;
@end
