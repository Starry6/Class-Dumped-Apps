@interface BSXPCConnectionListenerManager : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)defaultHandlerQueue;
+ (void)listenForService:onQueue:withHandler:;
+ (void)stopListeningForService:;
@end
