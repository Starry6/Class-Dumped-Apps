@interface RTCLooperManager : NSObject
@property (nonatomic) q nextHanderId;
@property (nonatomic) NSLock handlersLock;
@property (nonatomic) NSMutableDictionary handlers;
- (long long)registerHandler:looper:;
- (void)unregisterStaleHandlers;
- (long long)nextHanderId;
- (void)setNextHanderId:;
- (id)handlers;
- (void)setHandlers:;
- (id)init;
- (void)setHandlersLock:;
- (void).cxx_destruct;
- (id)handlersLock;
- (void)unregisterHandler:;
+ (id)sharedInstance;
@end
